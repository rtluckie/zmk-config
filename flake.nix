{
  description = "My awesome ZMK configuration";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";
    zmk-cli.url = "github:Townk/zmk-cli";
    zmk-cli.inputs.nixpkgs.follows = "nixpkgs";
  };

  outputs = {
    self,
    nixpkgs,
    zmk-cli,
  }: {
    inherit (zmk-cli) devShell;
  };
}
