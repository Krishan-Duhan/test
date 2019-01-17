
public class AllString {

	static void AllKString(char[] set, int k) {
		int n = set.length;
		AllKStringRec(set, n, k, "");
	}

	static void AllKStringRec(char[] set, int n, int k,String pref){
		if(k == 0) {
			System.out.println(pref);
			return;
		}
		for(int i = 0; i < n; i++) {
			String newPref = pref + set[i];
			AllKStringRec(set, n, k-1, newPref);
		}
	}

	public static void main(String[] args){
		char[] set = {'a', 'b', 'c', 'd'};
		AllKString(set,2);	
	}	
}
