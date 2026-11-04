// name: FUN_100587bd0
// address: 100587bd0

void FUN_100587bd0(undefined8 param_1,uint param_2,undefined1 param_3)

{
  if ((param_2 & 1) != 0) {
    FUN_100587203(param_1,0x1981,param_3);
  }
  if ((param_2 & 2) != 0) {
    FUN_100587203(param_1,0x624c,param_3);
  }
  if ((param_2 & 8) == 0) {
    return;
  }
  FUN_100587203(param_1,0x410,param_3);
  return;
}

