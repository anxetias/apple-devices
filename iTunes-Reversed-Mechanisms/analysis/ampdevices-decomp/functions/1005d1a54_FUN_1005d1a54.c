// name: FUN_1005d1a54
// address: 1005d1a54

undefined4 FUN_1005d1a54(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_100173bb7(*(undefined8 *)PTR__kUTTypePNG_10082e568,param_1,0);
    if (lVar1 == 0) {
      uVar2 = 0xe;
    }
    else {
      lVar1 = FUN_100173bb7(*(undefined8 *)PTR__kUTTypeJPEG_10082e550,param_1,0);
      if (lVar1 == 0) {
        uVar2 = 0xd;
      }
      else {
        lVar1 = FUN_100173bb7(*(undefined8 *)PTR__kUTTypeJPEG2000_10082e558,param_1,0);
        uVar2 = 0x1e;
        if (lVar1 != 0) {
          lVar1 = FUN_100173bb7(*(undefined8 *)PTR__kUTTypeBMP_10082e530,param_1,0);
          if (lVar1 == 0) {
            uVar2 = 0x1b;
          }
          else {
            lVar1 = FUN_100173bb7(*(undefined8 *)PTR__kUTTypeGIF_10082e540,param_1,0);
            if (lVar1 == 0) {
              uVar2 = 0xc;
            }
            else {
              lVar1 = FUN_100173bb7(*(undefined8 *)PTR__kUTTypeTIFF_10082e570,param_1,0);
              if (lVar1 == 0) {
                uVar2 = 0x1c;
              }
              else {
                lVar1 = FUN_100173bb7(*(undefined8 *)PTR__kUTTypePICT_10082e560,param_1,0);
                if (lVar1 == 0) {
                  uVar2 = 0x1d;
                }
                else {
                  lVar1 = FUN_100173bb7(*(undefined8 *)PTR__kUTTypeAppleICNS_10082e528,param_1,0);
                  if (lVar1 != 0) {
                    lVar1 = FUN_100173bb7(*(undefined8 *)PTR__kUTTypeICO_10082e548,param_1,0);
                    uVar2 = 0xe;
                    if (lVar1 != 0) {
                      uVar2 = 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}

