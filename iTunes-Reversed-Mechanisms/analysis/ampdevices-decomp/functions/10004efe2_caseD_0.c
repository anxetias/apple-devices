// name: caseD_0
// address: 10004efe2

void switchD_100047443::caseD_0(void)

{
  undefined *puVar1;
  int in_EAX;
  undefined8 uVar2;
  ulong uVar3;
  byte bVar4;
  long unaff_RBP;
  int iVar5;
  
  bVar4 = (byte)in_EAX ^ 1;
  iVar5 = in_EAX * -0x23080296 - ((uint)bVar4 + (uint)bVar4 * 4);
  puVar1 = (&PTR_DAT_10082ee00)[iVar5 + 0x1e];
  *(undefined **)(unaff_RBP + -0x250) = puVar1 + -3;
  uVar2 = (*(code *)(puVar1 + -3))(0x20);
  puVar1 = (&PTR_DAT_10082ee00)[iVar5 + 0xd1];
  *(undefined **)(unaff_RBP + -0x280) = puVar1;
  *(undefined8 *)(puVar1 + -6) = uVar2;
  uVar3 = (unaff_RBP - 0x60U & 0xee144ae5c4812ef) * -2 + unaff_RBP + 0xee144ae5c48128f ^
          0x55d83464cb14c86d;
  *(int *)(unaff_RBP + -0x58) = (int)uVar3 * 0x295bb3 + iVar5 + 9 + -0x6d95cfce;
  *(long *)(unaff_RBP + -0x50) = unaff_RBP + -0x1d0;
  *(ulong *)(unaff_RBP + -0x60) = uVar3 * -0x295bb3 + 0x3d8c459344aa9757;
  FUN_1000a30e0();
                    /* WARNING: Could not recover jumptable at 0x00010004f0df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 +
    *(int *)(&DAT_1006dedf0 +
            (long)(int)((uint)(*(int *)(unaff_RBP + -0x54) == 0x3a3402de) + iVar5 + 9) * 4)))();
  return;
}

