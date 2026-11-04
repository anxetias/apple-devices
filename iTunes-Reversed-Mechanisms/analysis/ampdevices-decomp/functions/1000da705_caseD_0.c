// name: caseD_0
// address: 1000da705

void switchD_100102fbc::caseD_0
               (undefined8 param_1,undefined8 param_2,undefined1 param_3,int param_4)

{
  undefined8 in_RAX;
  long unaff_RBP;
  long lVar1;
  uint uVar2;
  long unaff_R12;
  int iVar3;
  bool bVar4;
  
  iVar3 = param_4 * 0x4d660b54 + (int)CONCAT71((int7)((ulong)in_RAX >> 8),param_3) * 2;
  uVar2 = (int)unaff_RBP - 0x40;
  *(uint *)(unaff_RBP + -0x3c) =
       ((uVar2 & 0x7447c140) * -2 + uVar2 + 0x7447c147 ^ 0x79c89d1e) * 0x3df53769 ^
       iVar3 + 0xcc71bcc7U;
  FUN_10009ae70();
  bVar4 = *(int *)(unaff_RBP + -0x40) == 0x3a3402de;
  lVar1 = (long)*(int *)(unaff_R12 + (long)(int)((uint)bVar4 + iVar3 + 2) * 4);
                    /* WARNING: Could not recover jumptable at 0x0001000da772. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + lVar1))(caseD_0 + lVar1,lVar1,!bVar4,0);
  return;
}

