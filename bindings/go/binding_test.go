package tree_sitter_IniFileTopSolid_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-IniFileTopSolid"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_IniFileTopSolid.Language())
	if language == nil {
		t.Errorf("Error loading IniFileTopSolid grammar")
	}
}
