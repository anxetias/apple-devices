// name: FUN_100167fed
// address: 100167fed

undefined1 FUN_100167fed(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 in_RAX;
  undefined8 local_18;
  
  local_18 = in_RAX;
  cVar1 = FUN_100171493(param_1,param_2,&local_18);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1001654db(local_18,param_3);
  }
  return uVar2;
}

