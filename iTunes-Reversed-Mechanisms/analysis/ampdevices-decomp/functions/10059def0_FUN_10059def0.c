// name: FUN_10059def0
// address: 10059def0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10059def0(long param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  byte extraout_var;
  int iVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  uint *puVar16;
  char *pcVar17;
  ulong *puVar18;
  int local_16c;
  int local_168;
  uint local_164;
  ulong *local_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined2 local_14c;
  char *local_14a;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1005a0495:
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  uVar14 = *(undefined8 *)PTR__kCFAllocatorNull_10082e028;
  uVar13 = 0;
LAB_10059df4c:
  lVar12 = param_2 + uVar13 * 0x30;
  pcVar17 = *(char **)(param_2 + uVar13 * 0x30);
  lVar10 = param_1;
LAB_10059df71:
  pcVar8 = _strchr(pcVar17,0x2f);
  if (pcVar8 != (char *)0x0) goto code_r0x00010059df90;
  uVar9 = FUN_1001734f5(DAT_1008c4d90,pcVar17,0x8000100,uVar14);
  lVar10 = FUN_100171475(lVar10,uVar9);
  FUN_10017060f(uVar9);
  if (lVar10 == 0) goto switchD_10059e06f_default;
  lVar11 = _CFGetTypeID(lVar10);
  local_160 = (ulong *)(*(long *)(lVar12 + 0x10) + param_4);
  uVar15 = *(ulong *)(lVar12 + 0x18);
  if (uVar15 == 0) {
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      local_14a = "fieldSize != 0";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_158,0x16);
    }
    FUN_1001782e9(0,0);
  }
  switch(*(int *)(lVar12 + 8)) {
  case 1:
    if (uVar15 == 1) {
LAB_10059e3a3:
      *(byte *)local_160 = 1;
      goto switchD_10059e06f_default;
    }
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      puVar16 = &local_158;
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      pcVar17 = "fieldSize == sizeof(Boolean)";
      goto LAB_10059fdf2;
    }
    break;
  case 2:
    if (uVar15 != 1) {
LAB_1005a0473:
      uVar14 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar14,0x10);
      if (cVar2 != '\0') {
        local_158 = 0x8220202;
        local_154 = "Assertion failure";
        local_14c = 0x822;
        local_14a = "fieldSize == sizeof(Boolean)";
        __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_158,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1005a0495;
    }
    cVar2 = FUN_1005a1246(lVar10,lVar11,local_160);
    if (cVar2 != '\0') goto switchD_10059e06f_default;
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      puVar16 = &local_158;
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      pcVar17 = "SetCheckpointBooleanValue( value, valueTypeID, (Boolean *)fieldPtr)";
      goto LAB_10059fdf2;
    }
    break;
  case 3:
    if (uVar15 != 1) goto LAB_1005a0473;
    cVar2 = FUN_1005a1246(lVar10,lVar11,&local_58);
    if (cVar2 != '\0') {
      *(bool *)local_160 = (char)local_58 == '\0';
      goto switchD_10059e06f_default;
    }
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      puVar16 = &local_158;
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      pcVar17 = "SetCheckpointBooleanValue( value, valueTypeID, &result)";
      goto LAB_10059fdf2;
    }
    break;
  case 4:
    lVar12 = _CFNumberGetTypeID();
    if (lVar11 == lVar12) {
      cVar2 = FUN_1005a1590(lVar10,local_160,uVar15);
      if (cVar2 == '\0') goto LAB_10059ec37;
      goto switchD_10059e06f_default;
    }
LAB_10059eb00:
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      puVar16 = &local_158;
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      pcVar17 = "valueTypeID == CFNumberGetTypeID()";
      goto LAB_10059fdf2;
    }
    break;
  case 5:
    lVar12 = _CFNumberGetTypeID();
    puVar18 = local_160;
    if (lVar11 != lVar12) goto LAB_10059eb00;
    if (uVar15 != 8) goto LAB_10059e592;
    cVar2 = FUN_100172017(lVar10,4,local_160);
    if (cVar2 == '\0') goto LAB_10059ec37;
    if (*puVar18 < 0x1000) {
      uVar15 = *puVar18 << 0x14;
      goto LAB_10059fa75;
    }
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      puVar16 = &local_158;
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      pcVar17 = "* ((UInt64 *) fieldPtr) < 4096";
      goto LAB_10059fdf2;
    }
    break;
  case 6:
    lVar12 = _CFNumberGetTypeID();
    puVar18 = local_160;
    if (lVar11 != lVar12) goto LAB_10059eb00;
    if (uVar15 != 8) goto LAB_10059e592;
    cVar2 = FUN_100172017(lVar10,4,local_160);
    if (cVar2 == '\0') goto LAB_10059ec37;
    uVar15 = *puVar18 * 0x40000000 - 1;
LAB_10059fa75:
    *puVar18 = uVar15;
    goto switchD_10059e06f_default;
  case 7:
    local_58 = 0;
    uStack_54 = 0;
    lVar12 = _CFNumberGetTypeID();
    if (lVar11 != lVar12) goto LAB_10059eb00;
    if (uVar15 == 4) {
      cVar2 = FUN_100172017(lVar10,4,&local_58);
      if (cVar2 != '\0') {
        uVar15 = CONCAT44(uStack_54,local_58);
        if (uVar15 < 1000000000) {
          uVar6 = local_58 / 1000000;
        }
        else if (uVar15 >> 10 < 0x2e90edd) {
          uVar6 = (int)((uVar15 + 500000000) / 1000000000) * 1000;
        }
        else if (uVar15 >> 0xc < 0x2e90edd) {
          uVar6 = (int)((uVar15 + 2000000000) / 4000000000) * 4000;
        }
        else {
          uVar6 = (int)((uVar15 + 4000000000) / 8000000000) * 8000;
        }
        *(uint *)local_160 = uVar6;
        goto switchD_10059e06f_default;
      }
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        puVar16 = &local_158;
        local_158 = 0x8220202;
        local_154 = "Assertion failure";
        local_14c = 0x822;
        pcVar17 = "JRCFNumberGetValue((CFNumberRef) value, kCFNumberSInt64Type, &capacity)";
        goto LAB_10059fdf2;
      }
    }
    else {
LAB_10059eb92:
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        puVar16 = &local_158;
        local_158 = 0x8220202;
        local_154 = "Assertion failure";
        local_14c = 0x822;
        pcVar17 = "fieldSize == sizeof(UInt32)";
        goto LAB_10059fdf2;
      }
    }
    break;
  case 8:
    lVar12 = _CFStringGetTypeID();
    if (lVar11 != lVar12) {
LAB_10059ea78:
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 == '\0') break;
      puVar16 = &local_158;
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      pcVar17 = "valueTypeID == CFStringGetTypeID()";
      goto LAB_10059fdf2;
    }
    cVar2 = FUN_10017393c(lVar10,local_160,uVar15,0x8000100);
    if (cVar2 == '\0') goto LAB_10059edaa;
    goto switchD_10059e06f_default;
  case 9:
    lVar12 = _CFStringGetTypeID();
    if (lVar11 != lVar12) goto LAB_10059ea78;
    cVar2 = FUN_100169c94(lVar10,local_160,uVar15);
    if (cVar2 != '\0') goto switchD_10059e06f_default;
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      puVar16 = &local_158;
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      pcVar17 = "JRCFStringGetUStringMax((CFStringRef) value, (UStringPtr) fieldPtr, fieldSize)";
      goto LAB_10059fdf2;
    }
    break;
  case 10:
    lVar12 = _CFNumberGetTypeID();
    if (lVar11 != lVar12) goto LAB_10059eb00;
    if (uVar15 == 4) {
      uVar9 = 5;
LAB_10059f2fe:
      cVar2 = FUN_100172017(lVar10,uVar9,local_160);
      if (cVar2 != '\0') goto switchD_10059e06f_default;
    }
    else if (uVar15 == 8) {
      uVar9 = 6;
      goto LAB_10059f2fe;
    }
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      puVar16 = &local_158;
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      pcVar17 = "SetCheckpointFloatValue((CFNumberRef) value, fieldPtr, fieldSize)";
      goto LAB_10059fdf2;
    }
    break;
  case 0xb:
    lVar12 = _CFStringGetTypeID();
    if (lVar11 != lVar12) goto LAB_10059ea78;
    if (uVar15 == 4) {
      cVar2 = FUN_1005a1340(lVar10,local_160);
      if (cVar2 != '\0') goto switchD_10059e06f_default;
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        puVar16 = &local_158;
        local_158 = 0x8220202;
        local_154 = "Assertion failure";
        local_14c = 0x822;
        pcVar17 = "SetCheckpointNumVersionValue((CFStringRef) value, (NumVersion *) fieldPtr)";
        goto LAB_10059fdf2;
      }
    }
    else {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        puVar16 = &local_158;
        local_158 = 0x8220202;
        local_154 = "Assertion failure";
        local_14c = 0x822;
        pcVar17 = "fieldSize == sizeof(NumVersion)";
        goto LAB_10059fdf2;
      }
    }
    break;
  case 0xc:
    lVar12 = _CFStringGetTypeID();
    if (lVar11 != lVar12) goto LAB_10059ea78;
    cVar2 = FUN_1005a140f(lVar10,local_160,uVar15);
    if (cVar2 != '\0') goto switchD_10059e06f_default;
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      puVar16 = &local_158;
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      pcVar17 = "SetCheckpointHexStringValue((CFStringRef) value, fieldPtr, fieldSize)";
      goto LAB_10059fdf2;
    }
    break;
  case 0xd:
    lVar12 = _CFStringGetTypeID();
    if (lVar11 != lVar12) goto LAB_10059ea78;
    cVar2 = FUN_1001738c9(lVar10,&local_158,0x100,0x600);
    if (cVar2 == '\0') {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        local_4a = 
        "JRCFStringGetPascalString(string, tempPString, sizeof(tempPString), kCFStringEncodingASCII)"
        ;
LAB_10059ff34:
        local_4c = 0x822;
        uStack_50 = 1;
        uStack_54 = 0x7a0a90;
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
LAB_10059f4ea:
      FUN_1001782e9(0,0);
    }
    else {
      cVar2 = FUN_1001e0f7d((long)&local_158 + 1,(char)local_158);
      if (cVar2 == '\0') {
        uVar9 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar9,0x10);
        if (cVar2 != '\0') {
          local_4a = "IsHexText(&tempPString[1], tempPString[0])";
          goto LAB_10059ff34;
        }
        goto LAB_10059f4ea;
      }
      if (uVar15 == 4) {
        uVar6 = local_158 >> 1 & 0x7f;
        goto LAB_10059f9aa;
      }
    }
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      puVar16 = &local_158;
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      pcVar17 = "SetCheckpointHexLengthValue((CFStringRef) value, fieldPtr, fieldSize)";
      goto LAB_10059fdf2;
    }
    break;
  case 0xe:
    lVar12 = _CFStringGetTypeID();
    if (lVar12 == lVar11) {
      cVar2 = FUN_1005a140f(lVar10,local_160,uVar15);
LAB_10059ece5:
      if (cVar2 != '\0') goto switchD_10059e06f_default;
    }
    else {
      lVar12 = _CFNumberGetTypeID();
      if (lVar12 == lVar11) {
        cVar2 = FUN_1005a1590(lVar10,local_160,uVar15);
        goto LAB_10059ece5;
      }
    }
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      puVar16 = &local_158;
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      pcVar17 = "SetCheckpointHexStringOrIntegerValue(value, valueTypeID, fieldPtr, fieldSize)";
      goto LAB_10059fdf2;
    }
    break;
  case 0xf:
    pcVar17 = *(char **)(lVar12 + 0x20);
    if (pcVar17 == (char *)0x0) {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        local_14a = "fieldString != nullptr";
LAB_10059fc2b:
        local_14c = 0x822;
        local_154 = "Assertion failure";
        local_158 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_158,0x16);
      }
LAB_10059ed9c:
      FUN_1001782e9(0,0);
    }
    else {
      uVar1 = *(ulong *)(lVar12 + 0x28);
      lVar12 = _CFStringGetTypeID();
      if (lVar12 == lVar11) {
        cVar2 = FUN_100169ddb(lVar10,pcVar17);
      }
      else {
        lVar12 = _CFNumberGetTypeID();
        if (lVar12 != lVar11) goto switchD_10059ee90_caseD_3;
        cVar2 = FUN_100172017(lVar10,3,&local_58);
        if (cVar2 == '\0') {
          uVar9 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar9,0x10);
          if (cVar2 != '\0') {
            local_14a = "JRCFNumberGetValue((CFNumberRef) value, kCFNumberSInt32Type, &enumValue)";
            goto LAB_10059fc2b;
          }
          goto LAB_10059ed9c;
        }
        lVar10 = (long)(int)local_58;
        lVar12 = _atol(pcVar17);
        cVar2 = lVar12 == lVar10;
      }
      if (cVar2 == '\0') goto switchD_10059e06f_default;
      switch(uVar15) {
      case 1:
        *(byte *)local_160 = (byte)uVar1;
        goto switchD_10059e06f_default;
      case 2:
        *(short *)local_160 = (short)uVar1;
        goto switchD_10059e06f_default;
      case 4:
        *(uint *)local_160 = (uint)uVar1;
        goto switchD_10059e06f_default;
      case 8:
        *local_160 = uVar1;
        goto switchD_10059e06f_default;
      }
    }
switchD_10059ee90_caseD_3:
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      puVar16 = &local_158;
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      pcVar17 = 
      "SetCheckpointEnumerationValue(value, valueTypeID, fields[fieldIndex].fieldString, fields[fieldIndex].fieldValue, fieldPtr, fieldSize)"
      ;
      goto LAB_10059fdf2;
    }
    break;
  case 0x10:
    lVar12 = _CFStringGetTypeID();
    if (lVar11 != lVar12) goto LAB_10059ea78;
    if (uVar15 == 4) {
      cVar2 = FUN_1001738c9(lVar10,&local_158,0x100,0x600);
      if (cVar2 != '\0') {
        if ((char)local_158 == '\x04') {
          uVar6 = FUN_1001e32a1(&local_158);
        }
        else {
          uVar6 = FUN_1001e0fc3(&local_158);
        }
LAB_10059f9aa:
        *(uint *)local_160 = uVar6;
        goto switchD_10059e06f_default;
      }
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        puVar16 = &local_58;
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x822;
        pcVar17 = 
        "JRCFStringGetPascalString(string, tempPString, sizeof(tempPString), kCFStringEncodingASCII)"
        ;
        goto LAB_10059fdf2;
      }
    }
    else {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        puVar16 = &local_158;
        local_158 = 0x8220202;
        local_154 = "Assertion failure";
        local_14c = 0x822;
        pcVar17 = "fieldSize == sizeof(OSType)";
        goto LAB_10059fdf2;
      }
    }
    break;
  case 0x11:
    lVar12 = _CFStringGetTypeID();
    if (lVar11 != lVar12) goto LAB_10059ea78;
    if (uVar15 == 1) {
      bVar3 = FUN_10017380b(lVar10,0);
      *(byte *)local_160 = bVar3;
      goto switchD_10059e06f_default;
    }
    if (uVar15 == 4) {
      uVar4 = FUN_10017380b(lVar10,0);
      uVar6 = (uint)uVar4;
      goto LAB_10059f9aa;
    }
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      puVar16 = &local_158;
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      pcVar17 = "fieldSize == sizeof(char) || fieldSize == sizeof(UInt32)";
      goto LAB_10059fdf2;
    }
    break;
  case 0x12:
    lVar12 = _CFStringGetTypeID();
    puVar18 = local_160;
    if (lVar11 != lVar12) goto LAB_10059ea78;
    cVar2 = FUN_10017393c(lVar10,local_160,uVar15,0x8000100);
    if (cVar2 != '\0') {
      if (((byte)*puVar18 == 0xcb) || (*(byte *)((long)puVar18 + 1) == 0x87)) {
        FUN_1001c62d9(puVar18,uVar15);
      }
      else {
        FUN_1001e67e4(puVar18);
      }
      goto switchD_10059e06f_default;
    }
LAB_10059edaa:
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      puVar16 = &local_158;
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      pcVar17 = 
      "JRCFStringGetCString((CFStringRef) value, (char *) fieldPtr, fieldSize, kCFStringEncodingUTF8)"
      ;
      goto LAB_10059fdf2;
    }
    break;
  case 0x13:
    lVar12 = _CFStringGetTypeID();
    if (lVar11 != lVar12) goto LAB_10059ea78;
    if (uVar15 == 6) {
      cVar2 = FUN_1001738c9(lVar10,&local_158,0x100,0x600);
      if (cVar2 != '\0') {
        iVar7 = FUN_1001e0fc3(&local_158);
        uVar4 = (ushort)((uint)iVar7 >> 8);
        *(ushort *)local_160 = (ushort)((uint)iVar7 >> 0x10) & 0xff | uVar4 & 0xff00;
        *(ushort *)((long)local_160 + 2) = uVar4 & 0xff | (ushort)iVar7 & 0xff00;
        *(ushort *)((long)local_160 + 4) = (ushort)iVar7 & 0xff | (ushort)(iVar7 << 8);
        goto switchD_10059e06f_default;
      }
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x822;
        local_4a = 
        "JRCFStringGetPascalString(string, hexString, sizeof(hexString), kCFStringEncodingASCII)";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        puVar16 = &local_158;
        local_158 = 0x8220202;
        local_154 = "Assertion failure";
        local_14c = 0x822;
        pcVar17 = "SetCheckpointRGBColorValue((CFStringRef) value, (RGBColor *) fieldPtr)";
        goto LAB_10059fdf2;
      }
    }
    else {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        puVar16 = &local_158;
        local_158 = 0x8220202;
        local_154 = "Assertion failure";
        local_14c = 0x822;
        pcVar17 = "fieldSize == sizeof(RGBColor)";
        goto LAB_10059fdf2;
      }
    }
    break;
  case 0x14:
    lVar12 = _CFStringGetTypeID();
    if (lVar11 != lVar12) goto LAB_10059ea78;
    if (uVar15 == 1) {
      cVar2 = FUN_1001738c9(lVar10,&local_158,0x100,0x600);
      if (cVar2 != '\0') {
        FUN_1001e0fc3(&local_158);
        bVar3 = extraout_var;
LAB_10059ea6a:
        *(byte *)local_160 = bVar3;
        goto switchD_10059e06f_default;
      }
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x822;
        local_4a = 
        "JRCFStringGetPascalString(string, hexString, sizeof(hexString), kCFStringEncodingASCII)";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        puVar16 = &local_158;
        local_158 = 0x8220202;
        local_154 = "Assertion failure";
        local_14c = 0x822;
        pcVar17 = "SetCheckpointRGBAlphaValue((CFStringRef) value, (UInt8 *) fieldPtr)";
        goto LAB_10059fdf2;
      }
    }
    else {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        puVar16 = &local_158;
        local_158 = 0x8220202;
        local_154 = "Assertion failure";
        local_14c = 0x822;
        pcVar17 = "fieldSize == sizeof(UInt8)";
        goto LAB_10059fdf2;
      }
    }
    break;
  case 0x15:
    lVar12 = _CFNumberGetTypeID();
    if (lVar11 != lVar12) goto LAB_10059eb00;
    if (uVar15 == 2) {
      cVar2 = FUN_100164d80(lVar10,&local_58);
      if (cVar2 != '\0') {
        if ((int)local_58 < 0xb4) {
          if (local_58 == 0) {
            uVar5 = 0;
          }
          else {
            if (local_58 != 0x5a) goto LAB_10059f5a8;
            uVar5 = 1;
          }
        }
        else if (local_58 == 0xb4) {
          uVar5 = 2;
        }
        else {
          if (local_58 != 0x10e) goto LAB_10059f5a8;
          uVar5 = 3;
        }
        *(undefined2 *)local_160 = uVar5;
        goto switchD_10059e06f_default;
      }
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        local_158 = 0x8220202;
        local_154 = "Assertion failure";
        local_14c = 0x822;
        local_14a = "JRCFTypeGetUInt32(number, &rotation)";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_158,0x16);
      }
      FUN_1001782e9(0,0);
LAB_10059f5a8:
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        puVar16 = &local_158;
        local_158 = 0x8220202;
        local_154 = "Assertion failure";
        local_14c = 0x822;
        pcVar17 = "SetCheckpointRotationValue((CFNumberRef) value, (UInt16 *) fieldPtr)";
        goto LAB_10059fdf2;
      }
    }
    else {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        puVar16 = &local_158;
        local_158 = 0x8220202;
        local_154 = "Assertion failure";
        local_14c = 0x822;
        pcVar17 = "fieldSize == sizeof(UInt16)";
        goto LAB_10059fdf2;
      }
    }
    break;
  case 0x16:
    lVar12 = _CFNumberGetTypeID();
    if (lVar11 != lVar12) goto LAB_10059eb00;
    if (uVar15 == 4) {
      cVar2 = FUN_1001654db(lVar10,&local_58);
      if (cVar2 != '\0') {
        uVar6 = (uint)((double)CONCAT44(uStack_54,local_58) * _DAT_100759740);
        goto LAB_10059f9aa;
      }
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        local_158 = 0x8220202;
        local_154 = "Assertion failure";
        local_14c = 0x822;
        local_14a = "JRCFTypeGetDouble(number, &gamma)";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_158,0x16);
      }
      FUN_1001782e9(0,0);
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        puVar16 = &local_158;
        local_158 = 0x8220202;
        local_154 = "Assertion failure";
        local_14c = 0x822;
        pcVar17 = "SetCheckpointGammaValue((CFNumberRef) value, (SInt32 *) fieldPtr)";
        goto LAB_10059fdf2;
      }
    }
    else {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        puVar16 = &local_158;
        local_158 = 0x8220202;
        local_154 = "Assertion failure";
        local_14c = 0x822;
        pcVar17 = "fieldSize == sizeof(SInt32)";
        goto LAB_10059fdf2;
      }
    }
    break;
  case 0x17:
    lVar12 = _CFNumberGetTypeID();
    if (lVar11 != lVar12) goto LAB_10059eb00;
    if (uVar15 != 4) goto LAB_10059eb92;
    cVar2 = FUN_100164d80(lVar10,&local_58);
    if (cVar2 != '\0') {
      if ((local_58 & 1) != 0) {
        *(uint *)local_160 = (uint)*local_160 | 0xfffff39d;
      }
      if ((local_58 & 2) != 0) {
        *(uint *)local_160 = (uint)*local_160 | 0xc62;
      }
      if ((local_58 & 4) != 0) {
        *(byte *)local_160 = (byte)*local_160 | 2;
      }
      if ((local_58 & 8) != 0) {
        *(byte *)local_160 = (byte)*local_160 | 0x20;
      }
      if ((local_58 & 0x10) != 0) {
        *(byte *)local_160 = (byte)*local_160 | 0x40;
      }
      if ((local_58 & 0x40) != 0) {
        *(byte *)((long)local_160 + 1) = *(byte *)((long)local_160 + 1) | 4;
      }
      if ((char)local_58 < '\0') {
        *(byte *)((long)local_160 + 1) = *(byte *)((long)local_160 + 1) | 8;
      }
      if ((local_58 >> 8 & 1) != 0) {
        *(byte *)local_160 = (byte)*local_160 | 4;
      }
      if ((local_58 >> 9 & 1) != 0) {
        *(byte *)((long)local_160 + 1) = *(byte *)((long)local_160 + 1) | 0x80;
      }
      if ((local_58 >> 10 & 1) != 0) {
        *(byte *)local_160 = (byte)*local_160 | 8;
      }
      if ((local_58 >> 0xb & 1) != 0) {
        *(byte *)((long)local_160 + 2) = *(byte *)((long)local_160 + 2) | 0x10;
      }
      if ((local_58 >> 0xc & 1) != 0) {
        *(byte *)((long)local_160 + 2) = *(byte *)((long)local_160 + 2) | 0x20;
      }
      if ((local_58 >> 0xd & 1) != 0) {
        *(byte *)((long)local_160 + 2) = *(byte *)((long)local_160 + 2) | 0x40;
      }
      goto switchD_10059e06f_default;
    }
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      local_14a = "JRCFTypeGetUInt32(number, &iPodMediaKinds)";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_158,0x16);
    }
    FUN_1001782e9(0,0);
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      puVar16 = &local_158;
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      pcVar17 = "SetCheckpointMediaKindsValue((CFNumberRef) value, (UInt32 *) fieldPtr)";
      goto LAB_10059fdf2;
    }
    break;
  case 0x18:
    lVar12 = _CFBooleanGetTypeID();
    if (lVar11 == lVar12) {
      if (uVar15 == 4) goto switchD_10059e06f_default;
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        puVar16 = &local_158;
        local_158 = 0x8220202;
        local_154 = "Assertion failure";
        local_14c = 0x822;
        pcVar17 = "fieldSize == sizeof(OptionBits)";
        goto LAB_10059fdf2;
      }
    }
    else {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        puVar16 = &local_158;
        local_158 = 0x8220202;
        local_154 = "Assertion failure";
        local_14c = 0x822;
        pcVar17 = "valueTypeID == CFBooleanGetTypeID()";
        goto LAB_10059fdf2;
      }
    }
    break;
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
    if (uVar15 == 8) {
      if (*(long *)(lVar12 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010059e099. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_1005a0590 +
                  *(int *)(&DAT_1005a0590 + (ulong)(*(int *)(lVar12 + 8) - 0x19) * 4)))();
        return;
      }
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        local_158 = 0x8220202;
        local_154 = "Assertion failure";
        local_14c = 0x822;
        local_14a = "fieldMask != 0";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_158,0x16);
      }
      FUN_1001782e9(0,0);
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        puVar16 = &local_158;
        local_158 = 0x8220202;
        local_154 = "Assertion failure";
        local_14c = 0x822;
        pcVar17 = 
        "SetCheckpointValidFieldValue(fields[fieldIndex].fieldType, value, valueTypeID, fields[fieldIndex].fieldValue, (UInt64 *) fieldPtr)"
        ;
        goto LAB_10059fdf2;
      }
    }
    else {
LAB_10059e592:
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        puVar16 = &local_158;
        local_158 = 0x8220202;
        local_154 = "Assertion failure";
        local_14c = 0x822;
        pcVar17 = "fieldSize == sizeof(UInt64)";
        goto LAB_10059fdf2;
      }
    }
    break;
  case 0x1d:
    lVar12 = _CFStringGetTypeID();
    if (lVar11 != lVar12) goto LAB_10059ea78;
    if (uVar15 != 1) {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        puVar16 = &local_158;
        local_158 = 0x8220202;
        local_154 = "Assertion failure";
        local_14c = 0x822;
        pcVar17 = "fieldSize == sizeof(IPodColor)";
        goto LAB_10059fdf2;
      }
      break;
    }
    uVar6 = FUN_1001740d5(lVar10);
    if ((int)uVar6 < 1) {
      cVar2 = FUN_100173f7c(lVar10,&cf__);
      if (cVar2 != '\0') {
        local_16c = 0;
        local_168 = 0;
        local_164 = 0;
        cVar2 = FUN_10017393c(lVar10,&local_158,0x40,0x600);
        if (cVar2 == '\0') {
          uVar9 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar9,0x10);
          if (cVar2 != '\0') {
            puVar16 = &local_58;
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            local_4c = 0x822;
            pcVar17 = "JRCFStringGetCString(string, str, sizeof(str), kCFStringEncodingASCII)";
LAB_10059fd84:
            *(char **)((long)puVar16 + 0xe) = pcVar17;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",puVar16,0x16);
          }
          goto LAB_10059fda9;
        }
        iVar7 = _sscanf((char *)&local_158,"#%02x%02x%02x",&local_16c,&local_168,&local_164);
        if (iVar7 == 3) {
          uVar6 = local_168 << 8 | local_16c << 0x10 | local_164;
          if ((int)uVar6 < 0xd6c8b9) {
            if ((int)uVar6 < 0xa1e877) {
              if (0x458dcd < (int)uVar6) {
                if ((int)uVar6 < 0x6b6a6d) {
                  if (uVar6 == 0x458dce) {
                    bVar3 = 7;
                  }
                  else {
                    if (uVar6 != 0x46abe0) goto LAB_1005a0379;
                    bVar3 = 4;
                  }
                }
                else {
                  if (uVar6 != 0x6b6a6d) {
                    if (uVar6 == 0x99989b) goto LAB_1005a0328;
                    goto LAB_1005a0379;
                  }
                  bVar3 = 0x18;
                }
LAB_1005a0350:
                *(byte *)local_160 = bVar3;
                goto switchD_10059e06f_default;
              }
              bVar3 = 10;
              if ((int)uVar6 < 0x302f34) {
                if ((uVar6 == 0x121211) || (uVar6 == 0x272728)) goto LAB_1005a0350;
              }
              else if ((uVar6 == 0x302f34) || (uVar6 == 0x3b3b3c)) goto LAB_1005a0350;
            }
            else if ((int)uVar6 < 0xb9b7ba) {
              if ((int)uVar6 < 0xb4b5b9) {
                if (uVar6 == 0xa1e877) {
                  bVar3 = 6;
                  goto LAB_1005a0350;
                }
                if (uVar6 == 0xaeb1b8) goto LAB_1005a0328;
              }
              else if ((uVar6 == 0xb4b5b9) || (uVar6 == 0xb7b7bb)) {
LAB_1005a0328:
                bVar3 = 0x17;
                goto LAB_1005a0350;
              }
            }
            else if ((int)uVar6 < 0xc8caca) {
              if (uVar6 == 0xb9b7ba) goto LAB_1005a0328;
              if (uVar6 == 0xc6353f) {
                bVar3 = 0xc;
                goto LAB_1005a0350;
              }
            }
            else {
              if (uVar6 == 0xc8caca) goto LAB_1005a034e;
              if (uVar6 == 0xd4c5b3) goto LAB_1005a034a;
            }
          }
          else if ((int)uVar6 < 0xe4c1b9) {
            if ((int)uVar6 < 0xe1ccb5) {
              if ((int)uVar6 < 0xdadcdb) {
                if (uVar6 == 0xd6c8b9) goto LAB_1005a034a;
                if (uVar6 == 0xd7d9d8) goto LAB_1005a02f0;
              }
              else if ((uVar6 == 0xdadcdb) || (uVar6 == 0xdcdede)) {
LAB_1005a02f0:
                bVar3 = 2;
                goto LAB_1005a0350;
              }
            }
            else if ((int)uVar6 < 0xe1e4e3) {
              if ((uVar6 == 0xe1ccb5) || (uVar6 == 0xe1ccb7)) {
LAB_1005a034a:
                bVar3 = 3;
                goto LAB_1005a0350;
              }
            }
            else {
              if (uVar6 == 0xe1e4e3) goto LAB_1005a034e;
              if (uVar6 == 0xe2ceb9) goto LAB_1005a034a;
            }
          }
          else if ((int)uVar6 < 0xefc0b9) {
            if ((int)uVar6 < 0xe5bdb5) {
              if (uVar6 == 0xe4c1b9) {
LAB_1005a0316:
                bVar3 = 0x19;
                goto LAB_1005a0350;
              }
              if (uVar6 == 0xe4e7e8) {
LAB_1005a034e:
                bVar3 = 1;
                goto LAB_1005a0350;
              }
            }
            else {
              if (uVar6 == 0xe5bdb5) goto LAB_1005a0316;
              if (uVar6 == 0xe75090) {
                bVar3 = 8;
                goto LAB_1005a0350;
              }
            }
          }
          else {
            if (0xfaf188 < (int)uVar6) {
              if (uVar6 == 0xfaf189) {
                bVar3 = 0x13;
              }
              else {
                if (uVar6 != 0xfe767a) goto LAB_1005a0379;
                bVar3 = 5;
              }
              goto LAB_1005a0350;
            }
            if (uVar6 == 0xefc0b9) goto LAB_1005a0316;
            if (uVar6 == 0xf5f4f7) goto LAB_1005a034e;
          }
LAB_1005a0379:
          *(byte *)local_160 = 0;
          goto LAB_10059fdb2;
        }
        uVar9 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar9,0x10);
        if (cVar2 != '\0') {
          puVar16 = &local_58;
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x822;
          pcVar17 = "sscanf(str, \"#%02x%02x%02x\", &r, &g, &b) == 3";
          goto LAB_10059fd84;
        }
        goto LAB_10059fda9;
      }
      cVar2 = FUN_100170633(lVar10,&cf_black);
      if ((cVar2 != '\0') || (cVar2 = FUN_100170633(lVar10,&cf_M68Plastic), cVar2 != '\0')) {
        *(byte *)local_160 = 10;
        goto switchD_10059e06f_default;
      }
      cVar2 = FUN_100170633(lVar10,&cf_white);
      if (cVar2 != '\0') goto LAB_10059e3a3;
      cVar2 = FUN_100170633(lVar10,&cf_silver);
      if ((cVar2 != '\0') || (cVar2 = FUN_100170633(lVar10,&cf_iPodShinyMetal), cVar2 != '\0')) {
        *(byte *)local_160 = 2;
        goto switchD_10059e06f_default;
      }
      cVar2 = FUN_100170633(lVar10,&cf_red);
      if (cVar2 != '\0') {
        *(byte *)local_160 = 0xc;
        goto switchD_10059e06f_default;
      }
      cVar2 = FUN_100170633(lVar10,&cf_pink);
      if (cVar2 != '\0') {
        *(byte *)local_160 = 5;
        goto switchD_10059e06f_default;
      }
      cVar2 = FUN_100170633(lVar10,&cf_blue);
      if (cVar2 != '\0') {
        *(byte *)local_160 = 4;
        goto switchD_10059e06f_default;
      }
      cVar2 = FUN_100170633(lVar10,&cf_yellow);
      if (cVar2 != '\0') {
        *(byte *)local_160 = 0x13;
        goto switchD_10059e06f_default;
      }
      cVar2 = FUN_100170633(lVar10,&cf_gold);
      if (cVar2 != '\0') {
        *(byte *)local_160 = 3;
        goto switchD_10059e06f_default;
      }
      cVar2 = FUN_100170633(lVar10,&cf_sparrow);
      if (cVar2 != '\0') {
        *(byte *)local_160 = 0x17;
        goto switchD_10059e06f_default;
      }
      cVar2 = FUN_100170633(lVar10,&cf_unknown);
      if (cVar2 != '\0') {
        *(byte *)local_160 = 0;
        goto switchD_10059e06f_default;
      }
    }
    else {
      if (uVar6 < 0x80) {
        bVar3 = ~(byte)uVar6;
        goto LAB_10059ea6a;
      }
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        puVar16 = &local_158;
        local_158 = 0x8220202;
        local_154 = "Assertion failure";
        local_14c = 0x822;
        pcVar17 = "colorIndex <= 127";
        goto LAB_10059fd84;
      }
LAB_10059fda9:
      FUN_1001782e9(0,0);
    }
LAB_10059fdb2:
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      puVar16 = &local_158;
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      pcVar17 = "SetCheckpointDeviceColorValue((CFStringRef) value, (IPodColor *) fieldPtr)";
      goto LAB_10059fdf2;
    }
    break;
  case 0x1e:
    lVar12 = _CFNumberGetTypeID();
    puVar18 = local_160;
    if (lVar11 != lVar12) goto LAB_10059eb00;
    if (uVar15 != 4) goto LAB_10059eb92;
    cVar2 = FUN_100172017(lVar10,3,local_160);
    if (cVar2 != '\0') {
      *(uint *)puVar18 = (uint)*puVar18 * 3;
      goto switchD_10059e06f_default;
    }
LAB_10059ec37:
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      puVar16 = &local_158;
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      pcVar17 = "SetCheckpointIntegerValue((CFNumberRef) value, fieldPtr, fieldSize)";
LAB_10059fdf2:
      *(char **)((long)puVar16 + 0xe) = pcVar17;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",puVar16,0x16);
    }
    break;
  case 0x1f:
    lVar12 = _CFNumberGetTypeID();
    puVar18 = local_160;
    if (lVar11 != lVar12) goto LAB_10059eb00;
    if ((uVar15 == 4) || (uVar15 == 8)) {
      cVar2 = FUN_1005a1590(lVar10,local_160,uVar15);
      if (cVar2 == '\0') goto LAB_10059ec37;
      if (uVar15 == 8) {
        uVar15 = *puVar18 * 1000000;
        goto LAB_10059fa75;
      }
      if (uVar15 == 4) {
        uVar6 = (uint)*local_160 * 1000000;
        goto LAB_10059f9aa;
      }
      goto switchD_10059e06f_default;
    }
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      puVar16 = &local_158;
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      pcVar17 = "fieldSize == sizeof(UInt32) || fieldSize == sizeof(UInt64)";
      goto LAB_10059fdf2;
    }
    break;
  case 0x20:
    lVar12 = _CFStringGetTypeID();
    if (lVar11 != lVar12) goto LAB_10059ea78;
    cVar2 = FUN_1001738c9(lVar10,&local_158,0x100,0x600);
    if (cVar2 == '\0') {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        local_4a = 
        "JRCFStringGetPascalString(string, guidString, sizeof(guidString), kCFStringEncodingASCII)";
LAB_10059fea3:
        uStack_50 = 1;
        uStack_54 = 0x7a0a90;
        local_4c = 0x822;
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
LAB_10059f3c4:
      FUN_1001782e9(0,0);
    }
    else {
      if (uVar15 < 0x14) {
        uVar9 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar9,0x10);
        if (cVar2 != '\0') {
          local_4a = "fieldSize >= 20";
          goto LAB_10059fea3;
        }
        goto LAB_10059f3c4;
      }
      if ((local_158 & 0xff) == 0x19) {
        cVar2 = FUN_1001e0f7d((long)&local_158 + 1,8);
        if (cVar2 == '\0') {
          uVar9 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar9,0x10);
          if (cVar2 != '\0') {
            local_4a = "IsHexText(&guidString[1], 8)";
            goto LAB_10059fea3;
          }
        }
        else if (local_154._5_1_ == '-') {
          lVar12 = (long)&local_154 + 6;
          cVar2 = FUN_1001e0f7d(lVar12,0x10);
          puVar18 = local_160;
          if (cVar2 != '\0') {
            *local_160 = 0x9f0a0ac2b0a49760;
            FUN_1001e0e77((long)&local_158 + 1,8,local_160 + 1,4);
            puVar18 = (ulong *)((long)puVar18 + 0xc);
            cVar2 = '\x10';
            uVar15 = 8;
            goto LAB_10059fb49;
          }
          uVar9 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar9,0x10);
          if (cVar2 != '\0') {
            local_4a = "IsHexText(&guidString[10], 16)";
            goto LAB_10059fea3;
          }
        }
        else {
          uVar9 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar9,0x10);
          if (cVar2 != '\0') {
            local_4a = "guidString[9] == \'-\'";
            goto LAB_10059fea3;
          }
        }
        goto LAB_10059f3c4;
      }
      if ((local_158 & 0xff) == 0x28) {
        lVar12 = (long)&local_158 + 1;
        cVar2 = FUN_1001e0f7d(lVar12,0x28);
        if (cVar2 == '\0') {
          uVar9 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar9,0x10);
          if (cVar2 != '\0') {
            local_4a = "IsHexText(&guidString[1], guidString[0])";
            goto LAB_10059fea3;
          }
          goto LAB_10059f3c4;
        }
        puVar18 = local_160;
        cVar2 = (char)local_158;
LAB_10059fb49:
        FUN_1001e0e77(lVar12,cVar2,puVar18,uVar15);
        goto switchD_10059e06f_default;
      }
    }
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      puVar16 = &local_158;
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      pcVar17 = "SetCheckpointFairPlayGUIDStringValue((CFStringRef) value, fieldPtr, fieldSize)";
      goto LAB_10059fdf2;
    }
    break;
  case 0x21:
    lVar12 = _CFStringGetTypeID();
    if (lVar11 != lVar12) goto LAB_10059ea78;
    if (uVar15 == 4) {
      cVar2 = FUN_1001738c9(lVar10,&local_158,0x100,0x600);
      if (cVar2 == '\0') {
        uVar9 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar9,0x10);
        if (cVar2 != '\0') {
          local_4a = 
          "JRCFStringGetPascalString(string, guidString, sizeof(guidString), kCFStringEncodingASCII)"
          ;
          goto LAB_1005a00b8;
        }
        goto LAB_10059f735;
      }
      if (((local_158 & 0xff) == 0x28) || ((local_158 & 0xff) == 0x19)) {
        *(uint *)local_160 = 0x14;
        goto switchD_10059e06f_default;
      }
    }
    else {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        local_4a = "fieldSize == sizeof(UInt32)";
LAB_1005a00b8:
        local_4c = 0x822;
        uStack_50 = 1;
        uStack_54 = 0x7a0a90;
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
LAB_10059f735:
      FUN_1001782e9(0,0);
    }
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      puVar16 = &local_158;
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      pcVar17 = "SetCheckpointFairPlayGUIDLengthValue((CFStringRef) value, fieldPtr, fieldSize)";
      goto LAB_10059fdf2;
    }
    break;
  default:
    goto switchD_10059e06f_default;
  }
  FUN_1001782e9(0,0);
  goto switchD_10059e06f_default;
code_r0x00010059df90:
  uVar9 = FUN_100173ab4(DAT_1008c4d90,pcVar17,(long)pcVar8 - (long)pcVar17,0x8000100,0);
  lVar10 = FUN_100166b7f(lVar10,uVar9);
  FUN_10017060f(uVar9);
  pcVar17 = pcVar8 + 1;
  if (lVar10 == 0) goto switchD_10059e06f_default;
  goto LAB_10059df71;
switchD_10059e06f_default:
  uVar13 = uVar13 + 1;
  if (uVar13 == (param_3 & 0xffffffff)) goto LAB_1005a0495;
  goto LAB_10059df4c;
}

