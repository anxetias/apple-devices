// name: FUN_100015e19
// address: 100015e19

void FUN_100015e19(void)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  int unaff_EBX;
  long unaff_RBP;
  undefined4 in_R8D;
  long unaff_R13;
  
  *(undefined4 *)(unaff_RBP + -0x58) = in_R8D;
  lVar2 = *(long *)(unaff_RBP + -0x110);
  pcVar3 = (code *)(&PTR__bootstrap_look_up_10082e9f0)[unaff_EBX + 0x8fac584];
  (*pcVar3)(*(undefined8 *)(unaff_RBP + -0xb0));
  (*pcVar3)(*(undefined8 *)(unaff_RBP + -0x88));
  iVar1 = *(int *)(unaff_R13 + (long)(int)(unaff_EBX + 0x8fac59e + (uint)(lVar2 == 0)) * 4);
  *(code **)(unaff_RBP + -0x60) = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x000100015e6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(FUN_100015e19 + iVar1))();
  return;
}

