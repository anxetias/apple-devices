// name: FUN_100572ff2
// address: 100572ff2

ulong FUN_100572ff2(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  uint *local_88;
  uint *local_80;
  uint *local_68;
  uint *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar4 = (**(code **)(*param_1 + 0xe0))();
  if (cVar4 == '\0') {
LAB_1005731c3:
    uVar10 = 0;
  }
  else {
    puVar9 = (uint *)0x56;
    if (sRam0000000000000054 == 0) {
      puVar9 = (uint *)0x85e;
    }
    if ((int)puVar9 == -8) {
      local_60 = (uint *)0x0;
      local_68 = (uint *)0x0;
      local_80 = (uint *)0x0;
      local_88 = (uint *)0x0;
      if ((ulong)-(long)puVar9 < 8) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_4a = "(end - beg) >= sizeof(AtomHeader)";
          goto LAB_10057324a;
        }
      }
      else {
        uVar6 = *puVar9;
        if ((uVar6 != 0) &&
           ((long)(ulong)(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                         uVar6 << 0x18) <= -(long)puVar9)) {
          uVar6 = puVar9[1];
          puVar1 = puVar9;
          puVar2 = local_80;
          puVar3 = local_68;
          if (uVar6 != 0x666e6973) {
            puVar1 = local_88;
            if (uVar6 == 0x44495555) {
              cVar4 = FUN_1001c5630(puVar9 + 2,&DAT_1007403f0,0x10);
              puVar3 = puVar9;
              if (cVar4 != '\0') goto LAB_100573163;
              uVar6 = puVar9[1];
            }
            puVar2 = puVar9;
            puVar3 = local_68;
            if ((uVar6 != 0x666e6970) && (puVar2 = local_80, uVar6 == 0x65657266)) {
              local_60 = puVar9;
            }
          }
LAB_100573163:
          local_68 = puVar3;
          local_80 = puVar2;
          local_88 = puVar1;
          if (local_88 != (uint *)0x0) {
            local_80 = local_88;
          }
          if (local_68 != (uint *)0x0 || local_80 != (uint *)0x0) {
            lVar8 = (**(code **)(*param_1 + 0x70))(param_1,*param_2);
            if (local_80 == (uint *)0x0) {
              uVar10 = 0;
            }
            else {
              uVar6 = FUN_100570eff(local_80,(long)local_80 + (*param_2 - lVar8),param_2[1],param_3)
              ;
              uVar10 = (ulong)uVar6;
            }
            if (local_68 != (uint *)0x0) {
              bVar5 = FUN_100570eff(local_68,(long)local_68 + (*param_2 - lVar8),param_2[1],param_4)
              ;
              uVar10 = CONCAT71((int7)(uVar10 >> 8),(byte)uVar10 | bVar5);
            }
            if ((param_5 != 0) && (local_60 != (uint *)0x0)) {
              bVar5 = FUN_100570eff(local_60,(long)local_60 + (*param_2 - lVar8),param_2[1],param_5)
              ;
              uVar10 = CONCAT71((int7)(uVar10 >> 8),(byte)uVar10 | bVar5);
            }
            goto LAB_10057327a;
          }
          goto LAB_1005731c3;
        }
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_4a = "atomSize != 0 && (atomSize <= (end - beg))";
          goto LAB_10057324a;
        }
      }
    }
    else {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_4a = "inDescSize >= (offsetToExtensions + sizeof(AtomHeader))";
LAB_10057324a:
        local_4c = 0x822;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
    }
    uVar10 = 0;
    FUN_1001782e9(0,0);
  }
LAB_10057327a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

