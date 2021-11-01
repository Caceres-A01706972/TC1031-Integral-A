<h1>CORRECCIONES</h1>
<li>SICT0302B   -> Selecciona un algoritmo de ordenamiento adecuado al problema</li>
<li>SICT0302B   ->Selecciona y usa una estructura lineal adecuada al problema</li>



<h1>Sistema de Nadadores</h1>

Este proyecto se basa en un sistema en el que se tiene una lista de nadadores y sus tiempos, el programa se encarga de ordenar a los nadadores por orden de velocidad. Y los asigna a un carril dependiendo de su velocidad. 
De la misma manera este programa puede encontrar si algun nadador tiene alguna marca tecnica, es decir algun tiempo que sea marca para poder ir a alguna competencia internacional. 

<h2>Analisis de Complejidad</h2>
<li>insertion()</li>
El Analisis de Complejidad de este algoritmo seria de O(n) porque dependiendo de que tan grande sea la lista va a recorrer por cada nodo hasta llegar al nodo final para poder agregar el siguiente nodo. Sin embargo, si el elemento es el primero en agregarse, es decir, se usa el insertionFirst() ese seria de complejidad O(1).
<br></br>

<li>search()</li>
Para este algoritmo, el analisis de complejidad es de O(n) ya que no sabemos en que index esta el valor que buscamos en la lista, asi que se tendria que recorrer por cada elemento de la lista checando si el p->value es igual al valor que se busca. 
<br></br>

<li>update()</li>
Este algoritmo tiene un Analisis de Complejidad de O(n) ya que recorre los elementos de la lista hasta que llegue al index especificado para cambiar el valor de ese elemento.
<br></br>

<li>deleteAt()</li>
El Analisis de Complejidad de este algoritmo es de O(n) ya que se recorre los elementos de la lista hasta llegar al index especificado y ahi hacer el delete. 
<br></br>

<li>insertionSort()</li>
El Analisis de Complejidad de este algoritmo es de O(n) ya que recorre durante toda la lista. 
<br></br>

<li>sortedInsert()</li>
El Analisis de Complejidad de este algoritmo es de O(n) ya que recorre durante toda la lista. 
<br></br>

<li>add()</li>
El Analisis de Complejidad de este algoritmo es de O(n) ya que debe de recorrer todo el arbol para llegar hasta abajo y insertar el nuevo nodo en su lugar correspondiente dependiendo si es mayor o menor.
<br></br>

<li>find()</li>
El Analisis de Complejidad de este algoritmo es de O(n) ya que recorre todo el arbol buscando si val==value.
<br></br>

<li>inorder()</li>
El Analisis de Complejidad de este algoritmo es de O(n) ya que se tiene que visitar cada nodo del arbol. 
