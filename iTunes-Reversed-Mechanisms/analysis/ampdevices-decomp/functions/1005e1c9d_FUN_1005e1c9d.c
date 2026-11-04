// name: FUN_1005e1c9d
// address: 1005e1c9d

undefined8
FUN_1005e1c9d(int param_1,ushort *param_2,uint param_3,ushort *param_4,int param_5,ushort *param_6)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint *puVar8;
  ushort uVar9;
  ulong uVar10;
  ushort local_70 [2];
  undefined4 local_6c;
  ushort *local_68;
  int local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0x74657874) {
    uVar9 = *param_2;
    uVar2 = uVar9 << 8 | uVar9 >> 8;
    uVar7 = 0xffffff32;
    if ((ulong)param_3 - 2 < (ulong)uVar2) goto LAB_1005e2000;
    uVar5 = (param_3 - uVar2) - 2;
    if (uVar5 != 0) {
      puVar4 = (uint *)((long)param_2 + (ulong)uVar2 + 2);
      do {
        if (uVar5 < 8) goto LAB_1005e2000;
        uVar6 = *puVar4;
        uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
        if ((uVar6 < 8) || (uVar5 < uVar6)) goto LAB_1005e2000;
        puVar4 = (uint *)((long)puVar4 + (ulong)uVar6);
        uVar5 = uVar5 - uVar6;
      } while (uVar5 != 0);
    }
  }
  else {
    uVar7 = 0xffffffce;
    if (param_1 != 0x74783367) goto LAB_1005e2000;
    uVar9 = *param_2;
  }
  *param_4 = 0;
  if (uVar9 == 0) {
LAB_1005e1e36:
    uVar10 = 0;
  }
  else {
    uVar5 = (uint)(ushort)(uVar9 << 8 | uVar9 >> 8);
    if (0xfc < uVar5) {
      uVar5 = 0xfd;
    }
    uVar10 = (ulong)uVar5;
    if (uVar9 == 0x100) {
LAB_1005e1da5:
      local_68 = param_4;
      FUN_1001e7237(param_2 + 1,uVar10,param_4 + 1,uVar10,local_70);
      *local_68 = local_70[0];
    }
    else {
      uVar9 = param_2[1];
      uVar2 = uVar9 << 8 | uVar9 >> 8;
      if (uVar2 == 0xfeff) {
        uVar3 = (undefined4)CONCAT71((uint7)(byte)uVar9,1);
      }
      else {
        if (uVar2 != 0xfffe) goto LAB_1005e1da5;
        uVar3 = 0;
      }
      uVar9 = (short)uVar5 - 2;
      uVar10 = (ulong)uVar9;
      if (uVar9 == 0) goto LAB_1005e1e36;
      local_6c = uVar3;
      local_68 = param_6;
      local_5c = param_5;
      _memmove(param_4 + 1,param_2 + 2,(ulong)uVar9);
      *param_4 = uVar9 >> 1;
      param_6 = local_68;
      param_5 = local_5c;
      if ((char)local_6c != '\0') {
        FUN_1001e53a1(param_4);
        param_6 = local_68;
        param_5 = local_5c;
      }
    }
  }
  uVar7 = 0;
  if (param_1 == 0x74783367 && param_6 != (ushort *)0x0) {
    puVar4 = (uint *)((ulong)param_3 + (long)param_2);
    for (puVar8 = (uint *)((long)param_2 + uVar10 + 2); puVar8 < puVar4;
        puVar8 = (uint *)((long)puVar8 + (ulong)uVar5)) {
      if ((ulong)((long)puVar4 - (long)puVar8) < 8) {
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          local_4a = "(end - beg) >= sizeof(AtomHeader)";
          goto LAB_1005e1fd0;
        }
        goto LAB_1005e1ff5;
      }
      uVar5 = *puVar8;
      if (uVar5 == 0) {
LAB_1005e1e9d:
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          local_4a = "atomSize != 0 && (atomSize <= (end - beg))";
LAB_1005e1fd0:
          local_4c = 0x822;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
LAB_1005e1ff5:
        uVar7 = 0;
        FUN_1001782e9(0,0);
        break;
      }
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      if ((long)puVar4 - (long)puVar8 < (long)(ulong)uVar5) goto LAB_1005e1e9d;
      if (puVar8[1] == 0x66657268) {
        if (uVar5 < 0xd) {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          if (cVar1 != '\0') {
            local_4a = "urlAtomSize >= (sizeof(AtomHeader) + (2 * sizeof(UInt16)) + sizeof(UInt8) )"
            ;
            goto LAB_1005e1fd0;
          }
          goto LAB_1005e1ff5;
        }
        uVar5 = param_5 - 1U;
        if ((uint)(byte)puVar8[3] <= param_5 - 1U) {
          uVar5 = (uint)(byte)puVar8[3];
        }
        uVar10 = (ulong)(byte)uVar5;
        if ((long)puVar4 - ((long)puVar8 + 0xd) < (long)uVar10) {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          if (cVar1 == '\0') goto LAB_1005e1ff5;
          local_4a = 
          "(end - &beg[sizeof(AtomHeader) + (2 * sizeof(UInt16)) + sizeof(UInt8)]) >= urlLength";
          goto LAB_1005e1fd0;
        }
        _memmove(param_6,(void *)((long)puVar8 + 0xd),uVar10);
        *(undefined1 *)((long)param_6 + uVar10) = 0;
        uVar7 = 0;
        break;
      }
    }
  }
LAB_1005e2000:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

