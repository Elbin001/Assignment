
// print the names of the people with the given age


let people = [
    {
        name : 'Alice',
        age : 20,
    },
    {
        name : 'Gincy',
        age : 22,
    },
    {
        name : 'Sara',
        age : 20,
    }
    ]
let a = prompt('Enter the age : ');
let givenAge = people.filter(info => info.age == a);

for(let index=0; index<givenAge.length; index++)
{
    console.log(givenAge[index].name);
}