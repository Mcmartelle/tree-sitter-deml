import XCTest
import SwiftTreeSitter
import TreeSitterDeml

final class TreeSitterDemlTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_deml())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Deml grammar")
    }
}
