package tree_sitter_deml_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_deml "github.com/tree-sitter/tree-sitter-deml/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_deml.Language())
	if language == nil {
		t.Errorf("Error loading Deml grammar")
	}
}
