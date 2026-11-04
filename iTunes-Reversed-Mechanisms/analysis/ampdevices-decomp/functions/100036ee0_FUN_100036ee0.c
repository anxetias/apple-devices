// name: FUN_100036ee0
// address: 100036ee0

void FUN_100036ee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = (uint)param_1;
  iVar1 = ((uVar3 & 0x11cdd457) * -2 + uVar3 + 0x91cdd457 ^ 0xe022b64e) * 0x540651b;
  iVar2 = *(int *)(param_1 + 8) + iVar1;
  bVar4 = *(int *)(param_1 + 0xc) + iVar1 + 0xc1c59372U < 0x101;
                    /* WARNING: Could not recover jumptable at 0x000100036f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006d37a0 + (long)(int)((iVar2 + 1) - (uint)bVar4) * 4) +
            0x100036f1e))(uVar3,0xde9b200e,param_3,iVar2,bVar4);
  return;
}

