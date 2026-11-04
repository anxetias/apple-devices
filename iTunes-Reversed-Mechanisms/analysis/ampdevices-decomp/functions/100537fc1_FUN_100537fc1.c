// name: FUN_100537fc1
// address: 100537fc1

undefined1 FUN_100537fc1(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  cVar1 = FUN_100537ef0(0);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_1001734f5(DAT_1008c4d90,param_1,0x600,*(undefined8 *)PTR__kCFAllocatorNull_10082e028
                         );
    plVar4 = (long *)FUN_1002f463c();
    uVar2 = (**(code **)(*plVar4 + 0x50))(plVar4,uVar3);
    FUN_10017060f(uVar3);
  }
  return uVar2;
}

