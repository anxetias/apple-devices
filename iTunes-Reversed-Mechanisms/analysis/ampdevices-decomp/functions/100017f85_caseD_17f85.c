// name: caseD_17f85
// address: 100017f85

void switchD_10001a75e::caseD_17f85
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int in_EAX;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_EBX;
  long unaff_RBP;
  int *in_R10;
  long in_R11;
  long *unaff_R13;
  
  *(undefined8 *)(unaff_RBP + -0xe8) = param_4;
  *(undefined8 *)(unaff_RBP + -0xc0) = param_4;
  *(undefined8 *)(unaff_RBP + -0xa0) = param_4;
  *(undefined8 *)(unaff_RBP + -0xb8) = param_4;
  *(undefined8 *)(unaff_RBP + -0xb0) = param_4;
  *(undefined8 *)(unaff_RBP + -0xd0) = param_4;
  *(undefined8 *)(unaff_RBP + -0x48) = 0x7f31ac3dd4da00c4;
  lVar1 = *unaff_R13;
  *(undefined1 *)(lVar1 + (ulong)(in_EAX + 0x92fee118)) = 0;
  *(undefined1 *)(lVar1 + (ulong)(in_EAX + 0x92fee119)) = 0;
  *(undefined1 *)(lVar1 + (ulong)(in_EAX + 0x92fee11a)) = 0;
  *(undefined1 *)(lVar1 + (ulong)(in_EAX + unaff_EBX + 0x92fee111)) = 1;
  *(int **)(unaff_RBP + -0x140) = in_R10;
  *in_R10 = *in_R10 + 4;
  UNRECOVERED_JUMPTABLE =
       (code *)((long)*(int *)(in_R11 + (long)(unaff_EBX + 0xae) * 4) + 0x10001b330);
                    /* WARNING: Could not recover jumptable at 0x00010001b35a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_1,unaff_EBX + 0x4101822c,(ulong)(in_EAX + 0x92fee11a),UNRECOVERED_JUMPTABLE,
             0x3166a97d);
  return;
}

