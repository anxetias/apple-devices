// name: FUN_10038faf2
// address: 10038faf2

int FUN_10038faf2(long param_1,char param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  ushort *puVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint local_264;
  char local_260;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  int local_24a;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = *(long *)(param_1 + 8);
  iVar5 = FUN_10038815d(param_1,&local_264,0xc);
  if (iVar5 == -0x80) goto LAB_10038ffb3;
  if (iVar5 == 0) {
    if (*(char *)(param_1 + 0x15) != '\0') {
      local_264 = local_264 >> 0x18 | (local_264 & 0xff0000) >> 8 | (local_264 & 0xff00) << 8 |
                  local_264 << 0x18;
    }
    iVar5 = FUN_10038815d(param_1,lVar2,local_264);
    if (iVar5 == -0x80) goto LAB_10038ffb3;
    if (iVar5 == 0) {
      if (local_260 == '\x02') {
        if (*(char *)(param_1 + 0x15) != '\0') {
          if (1 < local_264) {
            uVar8 = 0;
            do {
              puVar1 = (ushort *)(lVar2 + uVar8 * 2);
              *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
              uVar8 = uVar8 + 1;
            } while (local_264 >> 1 != uVar8);
          }
        }
        if (param_3 == 3) {
          FUN_100184d94(lVar2,local_264 >> 1);
        }
      }
      else if (param_3 == 3 && local_260 == '\x01') {
        FUN_100184ee6(lVar2,local_264);
      }
      if (param_2 == '\x02' && local_260 == '\x01') {
        FUN_1001e5811(lVar2,local_264,&local_238);
        iVar5 = FUN_1001dda84(param_4,&local_238,param_5);
        if ((iVar5 == -0x80) || (iVar5 == 0)) goto LAB_10038ffb3;
        uVar6 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar6,0x10);
        if (cVar4 == '\0') goto LAB_10038ffb3;
        puVar10 = &local_258;
        local_258 = 0x8220202;
        local_254 = "Assertion failure";
        local_24c = 0x400;
        local_24a = iVar5;
      }
      else if (param_2 == '\x01' && local_260 == '\x02') {
        uVar8 = (ulong)local_264;
        if (0x1fe < local_264) {
          uVar6 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar6,0x10);
          if (cVar4 != '\0') {
            local_238 = 0x8220202;
            local_234 = "Assertion failure";
            local_22c = 0x822;
            local_22a = "dbString.dataSize <= 510";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
          }
          FUN_1001782e9(0,0);
          local_264 = 0x1fe;
          uVar8 = 0x1fe;
        }
        uVar8 = uVar8 >> 1;
        uVar3 = (int)uVar8 * 3;
        lVar7 = *(long *)(param_1 + 0x8030);
        uVar9 = *(uint *)(param_1 + 0x8028);
        if (*(uint *)(param_1 + 0x8028) < uVar3) {
          if (lVar7 != 0) {
            FUN_1001c64c1(lVar7);
            *(undefined8 *)(param_1 + 0x8030) = 0;
            *(undefined4 *)(param_1 + 0x8028) = 0;
          }
          lVar7 = FUN_1001c63e1(uVar3);
          *(long *)(param_1 + 0x8030) = lVar7;
          if (lVar7 == 0) {
            uVar6 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar6,0x10);
            if (cVar4 != '\0') {
              local_238 = 0x8220202;
              local_234 = "Assertion failure";
              local_22c = 0x822;
              local_22a = "context->conversionBuffer != nullptr";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_238,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            uVar6 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar6,0x10);
            iVar5 = -0x6c;
            if (cVar4 == '\0') goto LAB_10038ffb3;
            puVar10 = &local_238;
            local_238 = 0x8220202;
            local_234 = "Assertion failure";
            local_22c = 0x400;
            local_22a = (char *)CONCAT44(local_22a._4_4_,0xffffff94);
            goto LAB_10038fc7d;
          }
          *(uint *)(param_1 + 0x8028) = uVar3;
          uVar8 = (ulong)(local_264 >> 1);
          uVar9 = uVar3;
        }
        FUN_1001e73f2(lVar2,uVar8,lVar7,uVar9,&local_258);
        iVar5 = FUN_1001dda73(param_4,*(undefined8 *)(param_1 + 0x8030),local_258,param_5);
        if ((iVar5 == -0x80) || (iVar5 == 0)) goto LAB_10038ffb3;
        uVar6 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar6,0x10);
        if (cVar4 == '\0') goto LAB_10038ffb3;
        puVar10 = &local_238;
        local_238 = 0x8220202;
        local_234 = "Assertion failure";
        local_22c = 0x400;
        local_22a = (char *)CONCAT44(local_22a._4_4_,iVar5);
      }
      else {
        if (local_260 != param_2) {
          uVar6 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar6,0x10);
          if (cVar4 != '\0') {
            local_238 = 0x8220202;
            local_234 = "Assertion failure";
            local_22c = 0x822;
            local_22a = "dbString.textEncoding == desiredEncoding";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
          }
          FUN_1001782e9(0,0);
        }
        iVar5 = FUN_1001dda73(param_4,lVar2,local_264,param_5);
        if ((iVar5 == -0x80) || (iVar5 == 0)) goto LAB_10038ffb3;
        uVar6 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar6,0x10);
        if (cVar4 == '\0') goto LAB_10038ffb3;
        puVar10 = &local_238;
        local_238 = 0x8220202;
        local_234 = "Assertion failure";
        local_22c = 0x400;
        local_22a = (char *)CONCAT44(local_22a._4_4_,iVar5);
      }
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 == '\0') goto LAB_10038ffb3;
      puVar10 = &local_238;
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x400;
      local_22a = (char *)CONCAT44(local_22a._4_4_,iVar5);
    }
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 == '\0') goto LAB_10038ffb3;
    puVar10 = &local_238;
    local_238 = 0x8220202;
    local_234 = "Assertion failure";
    local_22c = 0x400;
    local_22a = (char *)CONCAT44(local_22a._4_4_,iVar5);
  }
LAB_10038fc7d:
  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",puVar10,0x12);
LAB_10038ffb3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

