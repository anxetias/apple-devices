// name: FUN_100198086
// address: 100198086

undefined8
FUN_100198086(long param_1,long param_2,long param_3,long param_4,undefined8 *param_5,
             undefined4 *param_6)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  long local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_100696c2b(uVar5);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
  }
  else {
    local_40 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    local_58 = 0;
    uStack_54 = 0;
    local_50 = 0;
    local_48 = 0xbff0000000000000;
    lVar4 = FUN_1001736a5(DAT_1008c4d90);
    if (lVar4 != 0) {
      _CFRetain(lVar4);
    }
    bVar8 = local_68 != 0;
    local_68 = lVar4;
    if (bVar8) {
      _CFRelease();
    }
    FUN_10017060f(lVar4);
    if (param_3 != 0) {
      lVar4 = FUN_1001736a5(DAT_1008c4d90,param_3);
      if (lVar4 != 0) {
        _CFRetain(lVar4);
      }
      lVar2 = CONCAT44(uStack_5c,uStack_60);
      uStack_60 = (undefined4)lVar4;
      uStack_5c = (undefined4)((ulong)lVar4 >> 0x20);
      if (lVar2 != 0) {
        _CFRelease();
      }
      FUN_10017060f(lVar4);
    }
    if (param_4 == 0) {
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 != 0) {
        _CFRetain(lVar4);
      }
      lVar2 = CONCAT44(uStack_54,local_58);
      local_58 = (undefined4)lVar4;
      uStack_54 = (undefined4)((ulong)lVar4 >> 0x20);
      if (lVar2 != 0) {
        _CFRelease();
      }
    }
    else {
      lVar4 = FUN_1001736a5(DAT_1008c4d90,param_4);
      if (lVar4 != 0) {
        _CFRetain(lVar4);
      }
      lVar2 = CONCAT44(uStack_54,local_58);
      local_58 = (undefined4)lVar4;
      uStack_54 = (undefined4)((ulong)lVar4 >> 0x20);
      if (lVar2 != 0) {
        _CFRelease();
      }
      FUN_10017060f(lVar4);
    }
    puVar6 = (undefined8 *)(param_1 + 0x20);
    if (param_5 != (undefined8 *)0x0) {
      puVar6 = param_5;
    }
    local_48 = *puVar6;
    puVar7 = (undefined4 *)(param_1 + 0x18);
    if (param_6 != (undefined4 *)0x0) {
      puVar7 = param_6;
    }
    local_50 = *puVar7;
    uVar1 = *(ulong *)(param_1 + 0x30);
    if (uVar1 < *(ulong *)(param_1 + 0x38)) {
      FUN_100198691(uVar1,&local_68);
      lVar4 = uVar1 + 0x30;
      *(long *)(param_1 + 0x30) = lVar4;
    }
    else {
      lVar4 = FUN_10019855a(param_1 + 0x28,&local_68);
    }
    *(long *)(param_1 + 0x30) = lVar4;
    FUN_1001987fa(&local_68);
    uVar5 = 0;
  }
  return uVar5;
}

