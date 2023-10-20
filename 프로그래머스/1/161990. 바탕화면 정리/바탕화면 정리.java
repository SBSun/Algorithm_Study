class Solution {
    public int[] solution(String[] wallpaper) {
        int minX, minY;
        int maxX, maxY;

        minX = minY = Integer.MAX_VALUE;
        maxX = maxY = Integer.MIN_VALUE;

        int row = wallpaper.length;
        int col = wallpaper[0].length();

        for(int r = 0; r < row; r++){
            for(int c = 0; c < col; c++){
                if(wallpaper[r].charAt(c) == '#'){
                    minX = Math.min(minX, r);
                    minY = Math.min(minY, c);
                    maxX = Math.max(maxX, r);
                    maxY = Math.max(maxY, c);
                }
            }
        }

        return new int[]{minX, minY, maxX + 1, maxY + 1};
    }
}