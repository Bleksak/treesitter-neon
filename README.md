-- explain the project
# Treesitter parser for Neon (Nette configuration) language

## Installation

Clone this repository, and configure your treesitter:

```lua
local parsers = require("nvim-treesitter.parsers").get_parser_configs()
parsers.neon = {
    install_info = {
        url = "path/to/cloned/repo",
        generate_requires_npm = false,
        requires_generate_from_grammar = false,
        files = {"src/parser.c", "src/scanner.c"},
    },
    filetype = "neon",
}
```

Then run `TSInstall neon` to install the parser.
Also, don't forget to set `filetype=neon` for your .neon files. You can use this autocmd: 

```lua
vim.api.nvim_create_autocmd({"BufNewFile", "BufRead"},
    {
        pattern = {"*.neon"},
        command = "setfiletype neon",
    }
)
```

## Contributing

If you find a bug, or have a feature request, feel free to create a pull request or issue.
