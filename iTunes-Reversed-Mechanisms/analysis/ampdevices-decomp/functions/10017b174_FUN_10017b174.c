// name: FUN_10017b174
// address: 10017b174

void FUN_10017b174(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == *(long *)(param_1 + 0x18)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006848bb(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(long *)(param_1 + 8) != 0) {
      _CGContextRestoreGState();
      lVar3 = *(long *)(param_1 + 0x20);
    }
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(lVar3 + -8);
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(lVar3 + -4);
    FUN_10017c0e6(param_1,lVar3 + -0x58);
    FUN_10017c140(param_1,lVar3 + -0x30);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x58;
  }
  return;
}

