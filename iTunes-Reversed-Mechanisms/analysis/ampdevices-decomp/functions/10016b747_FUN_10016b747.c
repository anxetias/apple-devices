// name: FUN_10016b747
// address: 10016b747

void FUN_10016b747(long param_1,ulong param_2,uint param_3)

{
  void *pvVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  size_t sVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 local_50;
  void *local_48;
  ulong local_38;
  
  if (0x14 < param_3) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_100678c44(uVar5);
    }
LAB_10016b7d3:
    FUN_1001782e9(0,0);
    return;
  }
  if (param_1 == 0) {
LAB_10016bd67:
    FUN_10016dd2e(param_2,0);
    FUN_10016e176(param_2);
    return;
  }
  lVar3 = _CFGetTypeID(param_1);
  lVar4 = _CFDictionaryGetTypeID();
  if (lVar3 == lVar4) {
    FUN_10016db5e(param_2);
    local_48 = (void *)CONCAT44(local_48._4_4_,param_3);
    local_50 = (void *)param_2;
    local_38 = param_2;
    FUN_1001714c2(param_1,FUN_10016dbda);
    FUN_10016de96(param_2,0);
    return;
  }
  lVar4 = _CFArrayGetTypeID();
  if (lVar3 == lVar4) {
    FUN_10016defc(param_2);
    local_50 = (void *)param_2;
    lVar3 = _CFArrayGetCount(param_1);
    if (0 < lVar3) {
      lVar4 = 0;
      do {
        uVar5 = _CFArrayGetValueAtIndex(param_1,lVar4);
        FUN_10016b747(uVar5,param_2,param_3 + 1);
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    FUN_10016df90(param_2,0);
    return;
  }
  lVar4 = _CFBooleanGetTypeID();
  if (lVar3 == lVar4) {
    cVar2 = _CFBooleanGetValue(param_1);
    FUN_10016dd2e(param_2,(cVar2 != '\0') + '\x01');
    FUN_10016dff6(param_2,cVar2 != '\0');
    return;
  }
  lVar4 = _CFDateGetTypeID();
  uVar5 = DAT_1008c4d90;
  if (lVar3 == lVar4) {
    _CFDateGetAbsoluteTime(param_1);
    local_38 = FUN_100166488(uVar5);
    FUN_1001b7eb0(&local_50,local_38);
    uVar5 = FUN_1001b83ae(&local_50);
    FUN_10016d954(param_2,uVar5);
    FUN_1001b7a50(&local_50);
    FUN_10016d588(&local_38);
    return;
  }
  lVar4 = _CFNumberGetTypeID();
  if (lVar3 != lVar4) {
    lVar4 = _CFStringGetTypeID();
    if (lVar3 == lVar4) {
      pcVar6 = (char *)_CFStringGetCStringPtr(param_1,0x8000100);
      if (pcVar6 != (char *)0x0) {
        sVar7 = _strlen(pcVar6);
        FUN_10016dd2e(param_2,5);
        FUN_10016f2da(param_2,pcVar6,sVar7);
        return;
      }
      uVar5 = _CFStringGetLength(param_1);
      uVar5 = _CFStringGetMaximumSizeForEncoding(uVar5,0x8000100);
      local_38 = local_38 & 0xffffffffffffff00;
      FUN_10016f534(&local_50,uVar5,&local_38);
      local_38 = 0;
      uVar9 = _CFStringGetLength(param_1);
      _CFStringGetBytes(param_1,0,uVar9,0x8000100,0,0,local_50,uVar5,&local_38);
      uVar8 = local_38;
      pvVar1 = local_50;
      FUN_10016dd2e(param_2,5);
      FUN_10016f2da(param_2,pvVar1,uVar8);
      if (local_50 == (void *)0x0) {
        return;
      }
      local_48 = local_50;
      operator_delete(local_50);
      return;
    }
    lVar4 = _CFDataGetTypeID();
    if (lVar3 == lVar4) {
      local_38 = FUN_100169026(DAT_1008c4d90,param_1);
      FUN_1001b7eb0(&local_50,local_38);
      FUN_10016d588(&local_38);
      uVar5 = FUN_1001b83ae(&local_50);
      uVar9 = FUN_1001b83f0(&local_50);
      FUN_10016dd2e(param_2,5);
      FUN_10016f2da(param_2,uVar5,uVar9);
      FUN_1001b7a50(&local_50);
      return;
    }
    lVar4 = _CFDateGetTypeID();
    if (lVar3 == lVar4) {
      FUN_1001a8bb0(&local_38,param_1);
      FUN_1001a8cb6(&local_50,&local_38);
      uVar5 = FUN_1001b83ae(&local_50);
      uVar9 = FUN_1001b83f0(&local_50);
      FUN_10016dd2e(param_2,5);
      FUN_10016f2da(param_2,uVar5,uVar9);
      FUN_1001b7a50(&local_50);
      FUN_1001a8c12(&local_38);
      return;
    }
    lVar4 = _CFURLGetTypeID();
    if (lVar3 == lVar4) {
      FUN_1001a8bb0(&local_38,param_1);
      FUN_1001ab3ce(&local_50,&local_38);
      uVar5 = FUN_1001b83ae(&local_50);
      uVar9 = FUN_1001b83f0(&local_50);
      FUN_10016dd2e(param_2,5);
      FUN_10016f2da(param_2,uVar5,uVar9);
      FUN_1001b7a50(&local_50);
      FUN_1001ab3c4(&local_38);
      return;
    }
    if (*(long *)PTR__kCFNull_10082e0c8 != param_1) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        FUN_100678cba(uVar5);
      }
      goto LAB_10016b7d3;
    }
    goto LAB_10016bd67;
  }
  cVar2 = _CFNumberIsFloatType(param_1);
  if (cVar2 == '\0') {
    uVar8 = _CFNumberGetByteSize(param_1);
    if (4 < uVar8) {
      if (8 < uVar8) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          FUN_100678e2e(uVar5);
        }
        cVar2 = FUN_1001782e9(0x400,0);
        if (cVar2 == '\0') {
          return;
        }
      }
      local_50 = (void *)0x0;
      cVar2 = _CFNumberGetValue(param_1,4);
      if (cVar2 == '\0') {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          FUN_100678ea4(uVar5);
        }
        cVar2 = FUN_1001782e9(0x400,0);
        if (cVar2 == '\0') {
          return;
        }
      }
      FUN_10016dac2(param_2,local_50);
      return;
    }
    local_50 = (void *)((ulong)local_50._4_4_ << 0x20);
    cVar2 = _CFNumberGetValue(param_1,9);
    if (cVar2 == '\0') {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        FUN_100678f1a(uVar5);
      }
      cVar2 = FUN_1001782e9(0x400,0);
      if (cVar2 == '\0') {
        return;
      }
    }
    FUN_10016da26(param_2,(ulong)local_50 & 0xffffffff);
    return;
  }
  local_50 = (void *)0x0;
  cVar2 = _CFNumberGetValue(param_1,0xd);
  if (cVar2 == '\0') {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_100678d42(uVar5);
    }
    cVar2 = FUN_1001782e9(0x400,0);
    if (cVar2 != '\0') goto LAB_10016b95b;
LAB_10016bb6e:
    FUN_10016dd2e(param_2,0);
    FUN_10016e176(param_2);
  }
  else {
LAB_10016b95b:
    if (0x7fefffffffffffff < ((ulong)local_50 & 0x7fffffffffffffff)) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        FUN_100678db8(uVar5);
      }
      cVar2 = FUN_1001782e9(0x400,0);
      if (cVar2 == '\0') goto LAB_10016bb6e;
    }
    FUN_10016d99c(local_50,param_2);
  }
  return;
}

