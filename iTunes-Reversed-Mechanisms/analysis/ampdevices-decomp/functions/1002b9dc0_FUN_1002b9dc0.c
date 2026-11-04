// name: FUN_1002b9dc0
// address: 1002b9dc0

int FUN_1002b9dc0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 *local_a8;
  undefined4 *puStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined6 auStack_78 [2];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_a8 = (undefined4 *)0x0;
  puStack_a0 = (undefined4 *)0x0;
  local_98 = 0;
  cVar3 = FUN_10048c3a1();
  if (cVar3 == '\0') {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_88._0_4_ = 0x8220202;
      local_88._4_4_ = 0x7a0a90;
      uStack_80 = 1;
      uStack_7c = 0x822;
      uStack_7a = 0x96c2;
      auStack_78[0] = 0x1007b;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    iVar4 = -0x32;
    FUN_1001782e9(0,0);
  }
  else {
    iVar4 = FUN_1002b9459(param_2,&local_a8);
    puVar2 = puStack_a0;
    if ((iVar4 == 0) && (iVar4 = 0, local_a8 != puStack_a0)) {
      puVar7 = local_a8;
      do {
        local_88._0_4_ = *puVar7;
        local_88._4_4_ = puVar7[1];
        uStack_80 = puVar7[2];
        uStack_7c = (undefined2)puVar7[3];
        uStack_7a = (undefined2)((uint)puVar7[3] >> 0x10);
        FUN_1001b7a5c(auStack_78,puVar7 + 4);
        FUN_1001b7a5c(local_68,puVar7 + 8);
        local_48 = puVar7[0x10];
        local_58 = puVar7[0xc];
        uStack_54 = puVar7[0xd];
        uStack_50 = puVar7[0xe];
        uStack_4c = puVar7[0xf];
        lVar5 = FUN_100485529(param_1);
        if (lVar5 != 0) {
          do {
            plVar1 = *(long **)(lVar5 + 8);
            if (((plVar1 != (long *)0x0) && ((*(byte *)((long)plVar1 + 0xc5) & 4) != 0)) &&
               (*plVar1 == CONCAT26(uStack_7a,CONCAT24(uStack_7c,uStack_80)))) {
              FUN_100471a46(plVar1);
              *(ulong *)(plVar1[0xe] + 0x38) = CONCAT44(local_88._4_4_,(undefined4)local_88);
              *(uint *)((long)plVar1 + 0xc2) =
                   *(uint *)((long)plVar1 + 0xc2) & 0xfeffffff | (uStack_4c >> 8 & 1) << 0x18;
              break;
            }
            lVar5 = *(long *)(lVar5 + 0x18);
          } while (lVar5 != 0);
        }
        FUN_1001b7a50(local_68);
        FUN_1001b7a50(auStack_78);
        puVar7 = puVar7 + 0x12;
      } while (puVar7 != puVar2);
      iVar4 = 0;
    }
  }
  local_88 = &local_a8;
  FUN_1002bbb52();
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

