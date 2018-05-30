#include<stdio.h>
int main()
{
	int a1, a2, a3, a4, a5, a6, a7, a8, a9, find = 0;
	for (a1 = 1; a1 <= 9; a1++){
		for (a2 = 1; a2 <= 9; a2++){
			if (a1 == a2){
				continue;
			}
			for (a3 = 1; a3 <= 9; a3++){
				if (a1 == a3 || a2 == a3){
					continue;
				}
				for (a4 = 1; a4 <= 9; a4++){
					if (a1 == a4 || a2 == a4 || a3 == a4){
						continue;
					}
					for (a5 = 1; a5 <= 9; a5++){
						if (a1 == a5 || a2 == a5 || a3 == a5 || a4 == a5){
							continue;
						}
						for (a6 = 1; a6 <= 9; a6++){
							if (a1 == a6 || a2 == a6 || a3 == a6 || a4 == a6 || a5 == a6){
								continue;
							}
							for (a7 = 1; a7 <= 9; a7++){
								if (a1 == a7 || a2 == a7 || a3 == a7 || a4 == a7 || a5 == a7 || a6 == a7){
									continue;
								}
								for (a8 = 1; a8 <= 9; a8++){
									if (a1 == a8 || a2 == a8 || a3 == a8 || a4 == a8 || a5 == a8 || a6 == a8 || a7 == a8){
										continue;
									}
									for (a9 = 1; a9 <= 9; a9++){
										if (a1 == a9 || a2 == a9 || a3 == a9 || a4 == a9 || a5 == a9 || a6 == a9 || a7 == a9 || a8 == a9){
											continue;
										}
										if (a1 % 1 == 0){
											if ((a1 * 10 + a2) % 2 == 0){
												if ((a1 * 100 + a2 * 10 + a3) % 3 == 0){
													if ((a1 * 1000 + a2 * 100 + a3 * 10 + a4) % 4 == 0){
														if ((a1 * 10000 + a2 * 1000 + a3 * 100 + a4 * 10 + a5) % 5 == 0){
															if ((a1 * 100000 + a2 * 10000 + a3 * 1000 + a4 * 100 + a5 * 10 + a6) % 6 == 0){
																if ((a1 * 1000000 + a2 * 100000 + a3 * 10000 + a4 * 1000 + a5 * 100 + a6 * 10 + a7) % 7 == 0){
																	if ((a1 * 10000000 + a2 * 1000000 + a3 * 100000 + a4 * 10000 + a5 * 1000 + a6 * 100 + a7 * 10 + a8) % 8 == 0){
																		if ((a1 * 100000000 + a2 * 10000000 + a3 * 1000000 + a4 * 100000 + a5 * 10000 + a6 * 1000 + a7 * 100 + a8 * 10 + a9) % 9 == 0){
																			find = 1;
																			break;
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
									if (find){
										break;
									}
								}
								if (find){
									break;
								}
							}
							if (find){
								break;
							}
						}
						if (find){
							break;
						}
					}
					if (find){
						break;
					}
				}
				if (find){
					break;
				}
			}
			if (find){
				break;
			}
		}
		if (find){
			break;
		}
	}
	printf("%d\n", a1 * 100000000 + a2 * 10000000 + a3 * 1000000 + a4 * 100000 + a5 * 10000 + a6 * 1000 + a7 * 100 + a8 * 10 + a9);
	return 0;
}
