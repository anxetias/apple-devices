// name: FUN_10001024f
// address: 10001024f

void FUN_10001024f(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int in_EAX;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_RBP;
  int *in_R9;
  long in_R10;
  long unaff_R13;
  int unaff_R15D;
  
  lVar2 = *(long *)(in_R10 + -0x3c616f4ea01f76b0);
  *(undefined1 *)(lVar2 + (ulong)(in_EAX + 0xf56bfc98)) = 0;
  *(undefined1 *)(lVar2 + (ulong)(in_EAX + 0xf56bfc99)) = 0;
  *(undefined1 *)(lVar2 + (ulong)(in_EAX + 0xf56bfc9a)) = 0;
  *(undefined1 *)(lVar2 + (ulong)(in_EAX + 0xf56bfc9b)) = 1;
  iVar1 = *in_R9;
  *(int **)(unaff_RBP + -0x198) = in_R9;
  *in_R9 = iVar1 + unaff_R15D + -6;
  UNRECOVERED_JUMPTABLE =
       (code *)((long)*(int *)(unaff_R13 + (long)(unaff_R15D + 0xd6) * 4) + 0x1000102aa);
                    /* WARNING: Could not recover jumptable at 0x0001000102d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(unaff_RBP + -0x50),param_2,(ulong)(in_EAX + 0xf56bfc9a),
             UNRECOVERED_JUMPTABLE,0x3166a97d);
  return;
}

