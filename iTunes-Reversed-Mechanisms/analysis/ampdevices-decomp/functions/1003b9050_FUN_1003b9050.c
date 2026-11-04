// name: FUN_1003b9050
// address: 1003b9050

int FUN_1003b9050(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined6 local_68;
  undefined2 uStack_62;
  uint local_60;
  undefined8 local_5c;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar12 = *param_1;
  puVar11 = (undefined4 *)FUN_1001c6429(0x80);
  if (puVar11 == (undefined4 *)0x0) {
    uVar12 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar12,0x10);
    if (cVar8 != '\0') {
      local_78 = 0x8220202;
      uStack_74 = 0x7a0a90;
      local_70 = 1;
      uStack_6c = 0x822;
      uStack_6a = 0x91b2;
      local_68 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    puVar11 = (undefined4 *)0x0;
    FUN_1001782e9(0,0);
    iVar10 = -0x6c;
  }
  else {
    *puVar11 = 0x706c7567;
    *(undefined8 *)(puVar11 + 0xe) = uVar12;
    uVar9 = *(undefined4 *)((long)param_1 + 4);
    uVar1 = *(undefined4 *)(param_1 + 1);
    uVar2 = *(undefined4 *)((long)param_1 + 0xc);
    uVar3 = *(undefined4 *)(param_1 + 2);
    uVar4 = *(undefined4 *)((long)param_1 + 0x14);
    uVar5 = *(undefined4 *)(param_1 + 3);
    uVar6 = *(undefined4 *)((long)param_1 + 0x1c);
    puVar11[4] = *(undefined4 *)param_1;
    puVar11[5] = uVar9;
    puVar11[6] = uVar1;
    puVar11[7] = uVar2;
    puVar11[8] = uVar3;
    puVar11[9] = uVar4;
    puVar11[10] = uVar5;
    puVar11[0xb] = uVar6;
    *(undefined8 *)(puVar11 + 0xc) = param_1[4];
    *(char *)(puVar11 + 0x18) = ((*(byte *)(param_1 + 1) & 1) == 0) * '\x02' + '\x01';
    uVar9 = FUN_1001ea5dc();
    puVar11[0x17] = uVar9;
    *(undefined8 *)(puVar11 + 0x10) = param_1[3];
    FUN_1001c62d9(&local_78,0x24);
    local_78 = 10;
    uStack_74 = 9;
    local_70 = SUB84(puVar11,0);
    uStack_6c = (undefined2)((ulong)puVar11 >> 0x20);
    uStack_6a = (undefined2)((ulong)puVar11 >> 0x30);
    local_68 = 0x1003b98a4;
    uStack_62 = 0;
    *(code **)(puVar11 + 0x12) = FUN_1003b98a4;
    local_5c = param_1[4];
    if ((*(long *)(puVar11 + 0x10) == 0) ||
       (iVar10 = FUN_1003b7d55(puVar11,0x696e6974,&local_78), iVar10 == 0)) {
      *(undefined8 *)(puVar11 + 0x14) = local_5c;
      puVar11[0x16] = local_60;
      if ((local_60 & 2) != 0) {
        puVar11[0x1c] = 1;
      }
      if ((local_60 & 8) != 0) {
        uVar7 = FUN_1001c19b0();
        FUN_10018d386(1,FUN_1003ba295,puVar11,1,uVar7,puVar11 + 0x1e);
      }
      if (*(long *)(puVar11 + 2) != 0) {
        uVar12 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar12,0x10);
        if (cVar8 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "element->*PNEXT == nullptr";
          __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      *(undefined4 **)(puVar11 + 2) = DAT_1008c7598;
      iVar10 = 0;
      DAT_1008c7598 = puVar11;
    }
    else {
      FUN_1003b85b7(puVar11);
      FUN_1001c64c1(puVar11);
      puVar11 = (undefined4 *)0x0;
    }
  }
  param_1[2] = puVar11;
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar10;
}

