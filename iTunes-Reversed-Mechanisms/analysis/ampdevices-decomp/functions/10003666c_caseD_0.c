// name: caseD_0
// address: 10003666c

void switchD_1000451f5::caseD_0
               (undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long unaff_RBP;
  uint uVar4;
  
  iVar3 = (int)CONCAT71((int7)((ulong)param_4 >> 8),param_3) * -0x5640f2b9;
  uVar4 = (int)unaff_RBP - 0x48;
  uVar4 = (uVar4 & 0x54c6e6e8) * -2 + uVar4 + 0xd4c6e6ee ^ 0xef264843;
  uVar2 = uVar4 * 0x22116dab;
  *(uint *)(unaff_RBP + -0x48) = uVar4 * -0x22116dab + 0x2b7d1cab;
  *(uint *)(unaff_RBP + -0x3c) = uVar2 ^ 0x7b1aeb73;
  *(uint *)(unaff_RBP + -0x38) = uVar2 + 0x984301c;
  *(uint *)(unaff_RBP + -0x44) = iVar3 + 0x9934af1fU ^ uVar2;
  FUN_1000ac960();
  iVar1 = *(int *)(unaff_RBP + -0x40) + -0x227cd23b;
                    /* WARNING: Could not recover jumptable at 0x000100036701. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + (int)(&switchdataD_1006dc670)[(int)((uint)(iVar1 < 0x2b6c1c42) + iVar3 + 0x5640f2c1)]
    ))(caseD_0 + (int)(&switchdataD_1006dc670)
                      [(int)((uint)(iVar1 < 0x2b6c1c42) + iVar3 + 0x5640f2c1)],0x2b6c1c41 < iVar1,
       iVar1 < 0x2b6c1c42,0);
  return;
}

