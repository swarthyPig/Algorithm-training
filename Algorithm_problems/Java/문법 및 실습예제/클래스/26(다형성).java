import java.util.*;

// 실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

class Animal {
	
	void eat() {
		System.out.println("먹습니다");
	}
}

class Tiger extends Animal {
	
	void hunter() {
		System.out.println("사냥합니다");
	}
}

class Lion extends Animal {
	
	void hunter() {
		System.out.println("사냥합니다");
	}

	void sleep() {
		System.out.println("낮잠을 잡니다");
	}
}

class Rabbit extends Animal {
	
	void walk() {
		System.out.println("토끼가 뛰어다닙니다.");
	}
}

class Dwarf extends Rabbit {
	
	void smile() {
		System.out.println("웃습니다");
	}
}

//is a, has a 관계
public class Young {

	public static void main(String[] args) {

		Animal a1 = new Animal();
		a1.eat();

		Tiger t1 = new Tiger();
		t1.eat();
		t1.hunter();

		Lion l1 = new Lion();
		l1.eat();
		l1.hunter();
		l1.sleep();

		Rabbit r1 = new Rabbit();
		r1.eat();
		r1.walk();

		Dwarf d1 = new Dwarf();
		d1.eat();
		d1.smile();
		d1.walk();
	}
}
