// name: caseD_23ac7
// address: 100023ac7

void switchD_100025d1a::caseD_23ac7(undefined8 param_1,uint param_2,int param_3,int *param_4)

{
  long lVar1;
  long unaff_RBP;
  long in_R11;
  
  lVar1 = *(long *)(*(long *)(unaff_RBP + -0x110) + -0x583fea33108f2bd4);
  *(undefined1 *)(lVar1 + (ulong)(((param_2 ^ 0xc) + 0xf2 ^ 0xa205f38e) + param_3)) = 0;
  *(undefined1 *)(lVar1 + (ulong)(param_3 + 0xa205f285)) = 0;
  *(undefined1 *)(lVar1 + (ulong)(param_3 + 0xa205f286)) = 0;
  *(undefined1 *)(lVar1 + (ulong)(param_3 + 0xa205f287)) = 1;
  *param_4 = *param_4 + 4;
                    /* WARNING: Could not recover jumptable at 0x00010001debd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(in_R11 + (long)(int)((param_2 ^ 0xc) + 0xf3) * 4) + 0x10001de9b))();
  return;
}

