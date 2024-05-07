{
  description = "dmenu flake by jonwin";

  inputs = {
    nixpkgs.url = "nixpkgs/nixos-unstable";
    utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, utils }:
    utils.lib.eachDefaultSystem (system: let
      pkgs = import nixpkgs {
        inherit system;

        overlays = [
          (final: prev: {
            dmenu = prev.dmenu.overrideAttrs (old: {
              src = ./.;
              buildInputs = old.buildInputs ++ [];
            });
          })
        ];
      };
    in {
      packages.default = pkgs.dmenu;

      devShell = pkgs.mkShell {
        buildInputs = with pkgs; [
          gnumake
          xorg.libX11
          xorg.libXft
          xorg.libXinerama
        ];
      };
    });
}
