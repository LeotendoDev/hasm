
if exists("b:current_syntax")
  finish
endif

set iskeyword=a-z,A-Z,-,*,_,!,@
syntax keyword hasmTodos TODO XXX FIXME NOTE

" Language keywords
syntax keyword hasmKeywords push pop add sub mul div class
" Comments
syntax region hasmCommentLine start="//" end="$"   contains=hasmTodos

" String literals
syntax region hasmString start=/\v"/ skip=/\v\\./ end=/\v"/ contains=hasmEscapes

" Char literals
syntax region hasmChar start=/\v'/ skip=/\v\\./ end=/\v'/ contains=hasmEscapes

" Escape literals \n, \r, ....
syntax match hasmEscapes display contained "\\[nr\"']"

" Number literals
syntax region hasmNumber start=/\s\d/ skip=/\d/ end=/\s/

" Type names the compiler recognizes
syntax keyword hasmTypeNames addr int ptr bool string
" Set highlights
highlight default link hasmTodos Todo
highlight default link hasmKeywords Keyword
highlight default link hasmCommentLine Comment
highlight default link hasmString String
highlight default link hasmNumber Number
highlight default link hasmTypeNames Type
highlight default link hasmChar Character
highlight default link hasmEscapes SpecialChar

let b:current_syntax = "hasm"

