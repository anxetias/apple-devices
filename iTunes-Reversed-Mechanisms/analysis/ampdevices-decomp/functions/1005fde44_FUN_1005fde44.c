// name: FUN_1005fde44
// address: 1005fde44

/* WARNING: Removing unreachable block (ram,0x0001005fdea0) */
/* WARNING: Removing unreachable block (ram,0x0001005fdec1) */

void FUN_1005fde44(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  char cVar1;
  
  cVar1 = FUN_1005fd93c(param_1,100);
  if (cVar1 != '\0') {
    (**(code **)(lRam0000000000000000 + 0x30))(0,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

