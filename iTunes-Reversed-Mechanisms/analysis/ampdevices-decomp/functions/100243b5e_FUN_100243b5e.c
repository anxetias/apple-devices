// name: FUN_100243b5e
// address: 100243b5e

void FUN_100243b5e(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_48 [16];
  undefined8 local_38;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  local_38 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  uVar4 = (*(code *)puVar1)(param_4);
  uVar2 = local_38;
  if (param_2 == 1) {
    uVar3 = 1;
  }
  else {
    if (param_2 != 0) goto LAB_100243bbd;
    uVar3 = 2;
  }
  *(undefined2 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar3;
LAB_100243bbd:
  FUN_1001bdca6(local_48,local_38);
  FUN_1001b80b2(*(long *)(param_1 + 0x30) + 0x1c0,local_48);
  FUN_1001b7a50(local_48);
  FUN_1001bdca6(local_48,uVar4);
  FUN_1001b80b2(*(long *)(param_1 + 0x30) + 0x1d0,local_48);
  FUN_1001b7a50(local_48);
  *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x1e0) = param_5;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  uVar5 = _CFRunLoopGetMain();
  _CFRunLoopWakeUp(uVar5);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)puVar1)(uVar2);
  return;
}

