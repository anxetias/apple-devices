// name: FUN_10012b30a
// address: 10012b30a

undefined8 FUN_10012b30a(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_30;
  undefined1 local_28 [8];
  undefined8 local_20;
  
  local_20 = param_1;
  FUN_1001a7b90(local_28);
  cVar1 = FUN_1001a98e2(param_2,local_28,&local_30);
  if (cVar1 != '\0') {
    local_20 = local_30;
  }
  FUN_1001ab240(local_28);
  return local_20;
}

