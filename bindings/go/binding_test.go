package tree_sitter_ini_top_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-ini_top"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_ini_top.Language())
	if language == nil {
		t.Errorf("Error loading IniTop grammar")
	}
}
