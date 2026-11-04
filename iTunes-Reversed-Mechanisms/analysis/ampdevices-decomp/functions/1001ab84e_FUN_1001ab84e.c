// name: FUN_1001ab84e
// address: 1001ab84e

void FUN_1001ab84e(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  cfstringStruct *local_38 [2];
  
  lVar2 = _CFStringFind(param_1,&cf__,0);
  if (lVar2 == -1) {
    FUN_1001aaef6(local_58,param_1);
    local_38[0] = &cf___;
    uVar1 = *(ulong *)(param_2 + 8);
    if (uVar1 < *(ulong *)(param_2 + 0x10)) {
      FUN_1001ac7f8(uVar1,local_58,local_38);
      lVar2 = uVar1 + 0x10;
      *(long *)(param_2 + 8) = lVar2;
    }
    else {
      lVar2 = FUN_1001ac702(param_2,local_58,local_38);
    }
    *(long *)(param_2 + 8) = lVar2;
    puVar5 = local_58;
  }
  else {
    uVar3 = _CFStringCreateWithSubstring(DAT_1008c4d98,param_1,0,lVar2);
    FUN_1001aaedc(local_48,uVar3);
    lVar4 = FUN_1001737f8(param_1);
    lVar2 = lVar2 + 1;
    if (lVar4 - lVar2 != 0 && lVar2 <= lVar4) {
      local_38[0] = (cfstringStruct *)
                    _CFStringCreateWithSubstring(DAT_1008c4d98,param_1,lVar2,lVar4 - lVar2);
      FUN_1001b7eb0(local_58,local_38[0]);
      FUN_10016d588(local_38);
      FUN_1001b7b04(local_78,"%26");
      FUN_1001b7b04(local_68,"&");
      FUN_1001ba8be(local_38,local_58,local_78,local_68);
      FUN_1001aaf14(local_40,local_38);
      FUN_1001b7a50(local_38);
      FUN_1001b7a50(local_68);
      FUN_1001b7a50(local_78);
      uVar1 = *(ulong *)(param_2 + 8);
      if (uVar1 < *(ulong *)(param_2 + 0x10)) {
        FUN_1001ac6cc(uVar1,local_48,local_40);
        lVar2 = uVar1 + 0x10;
        *(long *)(param_2 + 8) = lVar2;
      }
      else {
        lVar2 = FUN_1001ac5d6(param_2,local_48,local_40);
      }
      *(long *)(param_2 + 8) = lVar2;
      FUN_1001ab006(local_40);
      FUN_1001b7a50(local_58);
    }
    puVar5 = local_48;
  }
  FUN_1001ab006(puVar5);
  return;
}

