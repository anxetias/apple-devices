// name: FUN_1001e18ee
// address: 1001e18ee

void FUN_1001e18ee(uint param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  uint uVar4;
  int iVar5;
  undefined2 local_33c;
  undefined2 local_33a;
  short local_338 [256];
  char local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = param_1 + 500;
  if (param_2 != 0) {
    uVar2 = param_1;
  }
  FUN_1001e2862(param_3,0,(ulong)uVar2 / 3600000,uVar2 / 60000 + (uVar2 / 3600000) * -0x3c,
                uVar2 / 1000 + (uVar2 / 60000) * -0x3c);
  if (param_2 != 0) {
    iVar5 = 3;
    if ((ushort)param_2 < 3) {
      iVar5 = param_2;
    }
    _snprintf(local_138,0xff,"%lld",(ulong)(param_1 % 1000));
    local_338[0] = 0;
    sVar3 = _strlen(local_138);
    FUN_1001e5811(local_138,sVar3,local_338);
    local_138[0] = '\x01';
    local_138[1] = '\0';
    local_138[2] = '0';
    local_138[3] = '\0';
    if (local_338[0] != 3) {
      do {
        FUN_1001e479c(local_138,1,local_338,0xff);
      } while (local_338[0] != 3);
    }
    iVar1 = 3;
    if ((ushort)param_2 < 3) {
      local_338[0] = (short)iVar5;
      iVar1 = iVar5;
    }
    if (local_338[(ushort)iVar1] == 0x30) {
      uVar2 = iVar1 - 1;
      do {
        local_338[0] = (short)uVar2;
        uVar4 = uVar2 & 0xffff;
        uVar2 = uVar2 - 1;
      } while (local_338[uVar4] == 0x30);
      if ((short)uVar2 == -1) goto LAB_1001e1a95;
    }
    local_33c = 1;
    local_33a = FUN_1001e7a3d();
    FUN_1001e1890(&local_33c,param_3);
    FUN_1001e1890(local_338,param_3);
  }
LAB_1001e1a95:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

