// name: FUN_1002ce9e8
// address: 1002ce9e8

void FUN_1002ce9e8(long param_1,undefined8 *param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_2 = 0;
  *param_3 = 0;
  puVar3 = (undefined8 *)FUN_1001c6429(0x30);
  if (puVar3 == (undefined8 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "dataPtr != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *puVar3 = 0x100000073726576;
    *(undefined4 *)(puVar3 + 1) = 0x66626361;
    uVar1 = *(uint *)(param_1 + 0x20);
    *(uint *)((long)puVar3 + 0xc) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    if (*(int *)(param_1 + 0x1c) == 0) {
      puVar4 = puVar3 + 2;
      iVar7 = 2;
    }
    else {
      *(undefined4 *)(puVar3 + 2) = 0x74617262;
      uVar1 = *(uint *)(param_1 + 0x1c);
      *(uint *)((long)puVar3 + 0x14) =
           uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      puVar4 = puVar3 + 3;
      iVar7 = 3;
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      uVar6 = 0x71637273;
      if (*(int *)(param_1 + 0x20) == 3) {
        uVar6 = 0x71726276;
      }
      *(undefined4 *)puVar4 = uVar6;
      uVar1 = *(uint *)(param_1 + 0x24);
      *(uint *)((long)puVar4 + 4) =
           uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      iVar7 = iVar7 + 1;
      puVar4 = puVar4 + 1;
    }
    if (*(int *)(param_1 + 0x308) != 0) {
      *(undefined4 *)puVar4 = 0x76636463;
      uVar1 = *(uint *)(param_1 + 0x308);
      *(uint *)((long)puVar4 + 4) =
           uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      iVar7 = iVar7 + 1;
      puVar4 = puVar4 + 1;
    }
    if (puVar4 != (undefined8 *)((long)puVar3 + (ulong)(uint)(iVar7 << 3))) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "reinterpret_cast<UInt8 *>( pairs ) == (dataPtr + dataSize)";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    *param_2 = puVar3;
    *param_3 = iVar7 << 3;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

