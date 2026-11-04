// name: FUN_1001aaeaa
// address: 1001aaeaa

undefined8 FUN_1001aaeaa(long *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 in_RAX;
  undefined8 local_18;
  
  if (*param_1 != 0) {
    local_18 = in_RAX;
    cVar1 = _CFNumberGetValue(*param_1,4,&local_18);
    if (cVar1 != '\0') {
      param_2 = local_18;
    }
  }
  return param_2;
}

