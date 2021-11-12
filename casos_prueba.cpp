/*
Ricardo Andres Caceres Villibord A01706972
Archivo para de CASOS DE PRUEBA
*/

#include <iostream>
#include <sstream>
#include <cstring>
#include <string>
#include "algorithms.h"

using namespace std;

int main(int argc, char* argv[]) {
    List<int> l1;
    BST<int> bst;
    string ans;

    l1.insertion(25);
    ans = "[25]";
    cout << "\n" <<"TEST 1. Esperada: " << ans << "\n Programa: " << l1.toString() << "\n";
	cout <<	(!ans.compare(l1.toString()) ? "SUCCESS\n" : "FAIL\n");

    l1.insertion(23);
    l1.insertion(22);
    l1.insertion(27);
    ans= "[25, 23, 22, 27]";
    cout << "\n" <<"TEST 2. Esperada: " << ans << "\n Programa: " << l1.toString() << "\n";
	cout <<	(!ans.compare(l1.toString()) ? "SUCCESS\n" : "FAIL\n");

    cout << "\n" <<"TEST 3.- Esperada: " << 2 << " Programa: " << l1.search(22) << "\n";
	cout <<	(2 == l1.search(22) ? "SUCCESS\n" : "FAIL\n");

    cout << "\n" <<"TEST 4.- Esperada: " << 1 << " Programa: " << l1.search(23) << "\n";
	cout <<	(1 == l1.search(23) ? "SUCCESS\n" : "FAIL\n");

    l1.update(2,26);
	ans = "[25, 23, 26, 27]";
	cout << "\n" <<"TEST 5.- Esperada: " << ans << "\n Programa: " << l1.toString() << "\n";
	cout <<	(!ans.compare(l1.toString()) ? "SUCCESS\n" : "FAIL\n");

    l1.update(0,24);
	ans ="[24, 23, 26, 27]";
	cout << "\n" <<"TEST 6.- Esperada: " << ans << "\n Programa: " << l1.toString() << "\n";
	cout << (!ans.compare(l1.toString()) ? "SUCCESS\n" : "FAIL\n");

    l1.deleteAt(3);
	ans = "[24, 23, 26]";
	cout << "\n" <<"TEST 7.- Esperada: " << ans << "\n Programa: " << l1.toString() << "\n";
	cout <<	(!ans.compare(l1.toString()) ? "SUCCESS\n" : "FAIL\n");

    l1.deleteAt(0);
	ans = "[23, 26]";
	cout << "\n" <<"TEST 8.- Esperada: " << ans << "\n Programa: " << l1.toString() << "\n";
	cout <<	(!ans.compare(l1.toString()) ? "SUCCESS\n" : "FAIL\n");

    l1.insertion(21);
    l1.insertion(24);
    l1.insertion(22);
    ans= "[23, 26, 21, 24, 22]";
    cout << "\n" <<"TEST 9. Esperada: " << ans << "\n Programa: " << l1.toString() << "\n";
	cout <<	(!ans.compare(l1.toString()) ? "SUCCESS\n" : "FAIL\n");

    l1.insertionSort(l1.head);
    ans = "[21, 22, 23, 24, 26]";
    cout << "\n" <<"TEST 10. Esperada: " << ans << "\n Programa: " << l1.toString() << "\n";
	cout <<	(!ans.compare(l1.toString()) ? "SUCCESS\n" : "FAIL\n");

    bst.add(10);
	ans =	"[10]";
	cout << "\n" <<"TEST 11.- Esperada: " << ans << "\n Programa: " << bst.inorder() << "\n";
	cout <<	(!ans.compare(bst.inorder()) ? "success\n" : "fail\n");

    bst.add(14);
    bst.add(21);
    bst.add(15);
    bst.add(12);
    ans =	"[10 12 14 15 21]";
	cout << "\n" <<"TEST 12.- Esperada: " << ans << "\n Programa: " << bst.inorder() << "\n";
	cout <<	(!ans.compare(bst.inorder()) ? "success\n" : "fail\n");


}    

