// name: FUN_1001ab67c
// address: 1001ab67c

undefined8 FUN_1001ab67c(undefined8 param_1,long *param_2)

{
  undefined8 local_18;
  
  if (*param_2 == 0) {
    FUN_1001b7a44(param_1);
  }
  else {
    local_18 = _CFURLCopyHostName();
    FUN_1001b7eb0(param_1,local_18);
    FUN_10016d588(&local_18);
  }
  return param_1;
}

