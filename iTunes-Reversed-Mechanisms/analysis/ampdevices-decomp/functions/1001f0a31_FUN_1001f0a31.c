// name: FUN_1001f0a31
// address: 1001f0a31

int FUN_1001f0a31(long param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  undefined1 local_1f0 [136];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  void *local_150;
  undefined1 local_148 [272];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar1 = -0x66;
  if ((param_1 != 0) && (sVar2 = _strlen(param_2), sVar2 < 0x100)) {
    if (*(long *)(param_1 + 0x90) == 0) {
      iVar1 = -100;
    }
    else {
      local_168 = *(undefined8 *)(param_1 + 0x80);
      uStack_160 = *(undefined8 *)(param_1 + 0x88);
      pvVar3 = (void *)(param_1 + 0xb0);
      _memcpy(local_1f0,pvVar3,0x88);
      local_158 = *(undefined8 *)(param_1 + 0x138);
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0xa8);
      *(undefined8 *)(param_1 + 0x80) = 0;
      iVar1 = FUN_1001f0322(param_1,pvVar3,param_1 + 0x138,0,0,0,0,0,0);
      *(ulong *)(param_1 + 0x90) = (ulong)(iVar1 == 0);
      if (iVar1 == 0) {
        local_150 = pvVar3;
        do {
          iVar1 = FUN_1001f0322(param_1,0,0,local_148,0x100,0,0,0,0);
          pvVar3 = local_150;
          if (iVar1 != 0) break;
          iVar1 = FUN_1001ef958(local_148,param_2,param_3);
          if (iVar1 == 0) {
            iVar1 = 0;
            goto LAB_1001f0baf;
          }
          iVar1 = FUN_1001f096b(param_1);
          pvVar3 = local_150;
        } while (iVar1 == 0);
      }
      *(undefined8 *)(param_1 + 0x80) = local_168;
      *(undefined8 *)(param_1 + 0x88) = uStack_160;
      _memcpy(pvVar3,local_1f0,0x88);
      *(undefined8 *)(param_1 + 0x138) = local_158;
    }
  }
LAB_1001f0baf:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar1;
}

