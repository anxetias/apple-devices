// name: FUN_1001ed841
// address: 1001ed841

void FUN_1001ed841(long param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 local_68 [72];
  code *local_20;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006c4f87(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    uVar3 = _CFRunLoopGetCurrent();
    uVar3 = FUN_1001705fc(uVar3);
    *(undefined8 *)(lVar1 + 0x10) = uVar3;
    uVar3 = FUN_1001edfdf();
    *(undefined8 *)(lVar1 + 0x18) = uVar3;
    FUN_1001e8f15(param_1);
    FUN_1001c62d9(local_68,0x50);
    local_20 = FUN_1001eddf5;
    uVar3 = FUN_100172c7d(0,0,local_68);
    FUN_1001728e7(*(undefined8 *)(lVar1 + 0x10),uVar3,
                  *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118);
    FUN_1001727aa();
    FUN_100172cc1(uVar3);
    FUN_10017060f(uVar3);
    if (*(code **)(lVar1 + 0x28) != (code *)0x0) {
      (**(code **)(lVar1 + 0x28))(*(undefined8 *)(lVar1 + 0x30));
    }
    if (*(long *)(lVar1 + 0x38) != 0) {
      FUN_1001e8f15();
    }
    FUN_10017060f(*(undefined8 *)(lVar1 + 0x10));
    FUN_1001c64c1(lVar1);
  }
  return;
}

