// name: FUN_1001f25c0
// address: 1001f25c0

int FUN_1001f25c0(long param_1,char *param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 local_138 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  sVar3 = _strlen(param_2);
  iVar2 = (int)sVar3;
  if (iVar2 < 0xe3) {
    uVar6 = (ulong)*(uint *)(param_1 + 4);
    if (uVar6 == 0) {
      puVar7 = local_138;
    }
    else {
      _memset(local_138,9,uVar6);
      puVar7 = (undefined4 *)((long)local_138 + uVar6);
    }
    *puVar7 = 0x79656b3c;
    puVar5 = (undefined4 *)((long)puVar7 + 5);
    *(undefined1 *)(puVar7 + 1) = 0x3e;
    if (iVar2 != 0) {
      _memcpy(puVar5,param_2,sVar3 & 0xffffffff);
      puVar5 = (undefined4 *)((long)puVar7 + (ulong)(iVar2 - 1) + 6);
    }
    *puVar5 = 0x656b2f3c;
    *(undefined2 *)(puVar5 + 1) = 0x3e79;
    *(undefined1 *)((long)puVar5 + 6) = 0;
    iVar2 = FUN_1001f2711(param_1,local_138,param_3);
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006c62df(iVar2,uVar4);
      }
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006c6269(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

