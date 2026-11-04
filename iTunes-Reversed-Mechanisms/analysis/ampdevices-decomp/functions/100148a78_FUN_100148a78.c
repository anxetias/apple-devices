// name: FUN_100148a78
// address: 100148a78

void FUN_100148a78(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  lVar4 = **(long **)(param_1 + 8);
  lVar1 = (*(long **)(param_1 + 8))[1];
  if (lVar4 != lVar1) {
    do {
      cVar3 = FUN_1001a85de(param_2,lVar4);
      if (cVar3 != '\0') break;
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != lVar1);
    if (lVar4 != *(long *)(*(long *)(param_1 + 8) + 8)) {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      FUN_1001b7f2a(local_48,lVar4 + 8);
      FUN_1001a85ae(local_38,local_48,3);
      FUN_1001a871e(uVar2,local_38);
      FUN_1001a85d4(local_38);
      FUN_1001b7a50(local_48);
    }
  }
  return;
}

