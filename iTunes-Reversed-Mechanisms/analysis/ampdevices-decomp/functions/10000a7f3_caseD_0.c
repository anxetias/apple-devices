// name: caseD_0
// address: 10000a7f3

void switchD_100005f4d::caseD_0(undefined8 param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *unaff_RBX;
  int unaff_R13D;
  uint uVar1;
  code *unaff_R14;
  
  uVar1 = unaff_R13D + 0x403f995cU & 0xbfc0669f;
  (*unaff_R14)();
  unaff_RBX[3] = 0;
  *(undefined4 *)((long)unaff_RBX + 0x24) = 0x50a01b4b;
  *unaff_RBX = 0x611c7e149b50062b;
  UNRECOVERED_JUMPTABLE =
       (code *)((long)*(int *)(param_2 + (long)(int)(uVar1 + (unaff_RBX[6] == 0)) * 4) + 0x10000406f
               );
                    /* WARNING: Could not recover jumptable at 0x00010000a85e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (unaff_RBX[6],param_2,UNRECOVERED_JUMPTABLE,uVar1 + 0x1ab3b2fa & 0xe54c4d0b);
  return;
}

