import java.util.Arrays;
public class EqualSum {
	static void findallseq(int[] out, int diff,int start, int end) {
		if(start > end) {
			if(diff == 0){
				System.out.println(Arrays.toString(out));
			}
			return;
		}

		out[start] = 0;
		out[end] = 0;
		findallseq(out, diff, start + 1, end - 1);

		out[start] = 0;
		out[end] = 1;
		findallseq(out, diff + 1, start + 1, end - 1);

		out[start] = 1;
		out[end] = 0;
		findallseq(out, diff - 1, start + 1, end - 1);

		out[start] = 1;
		out[end] = 1;
		findallseq(out, diff, start + 1, end - 1);

	}

	public static void main(String[] args) {
		int n = 3;
		int[] out = new int[2*n];
		findallseq(out, 0, 0, 2*n-1);
	}
}
