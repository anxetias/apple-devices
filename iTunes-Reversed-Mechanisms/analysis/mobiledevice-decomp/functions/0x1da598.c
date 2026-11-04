// rea decompile_all
// name: _lzfse_decode_lzvn_block_iboot
// address: 0x1da598
// body: available
// range: 0x1da598-0x1da797 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _lzfse_decode_lzvn_block_iboot(long *param_1)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  byte *pbVar9;
  uint local_34;
  
  lVar8 = *param_1;
  pbVar9 = (byte *)(lVar8 + 0xc);
  if (pbVar9 <= (byte *)param_1[2]) {
    uVar6 = (ulong)*(uint *)(lVar8 + 8);
    lVar1 = uVar6 + 0xc;
    if (lVar1 <= param_1[2] - lVar8) {
      local_34 = 0;
      while (uVar5 = (uint)uVar6, uVar5 != 0) {
        bVar2 = *pbVar9;
        uVar3 = (uint)bVar2;
        switch(bVar2) {
        default:
          uVar7 = (uint)(bVar2 >> 6);
          if (uVar5 < (bVar2 >> 6) + 2) goto switchD_001da613_caseD_1e;
          uVar4 = (bVar2 >> 3 & 7) + 3;
          local_34 = (uint)pbVar9[1] | (uVar3 & 7) << 8;
          lVar8 = 2;
          break;
        case 6:
          if (uVar5 < 8) {
            return 0xffffffff;
          }
          *param_1 = *param_1 + lVar1;
          return 0;
        case 7:
        case 0xf:
        case 0x17:
        case 0x1f:
        case 0x27:
        case 0x2f:
        case 0x37:
        case 0x3f:
        case 0x47:
        case 0x4f:
        case 0x57:
        case 0x5f:
        case 0x67:
        case 0x6f:
        case 0x87:
        case 0x8f:
        case 0x97:
        case 0x9f:
        case 199:
        case 0xcf:
          uVar7 = (uint)(bVar2 >> 6);
          if (uVar5 < (bVar2 >> 6) + 3) goto switchD_001da613_caseD_1e;
          uVar4 = (bVar2 >> 3 & 7) + 3;
          local_34 = (uint)*(ushort *)(pbVar9 + 1);
          lVar8 = 3;
          break;
        case 0xe:
        case 0x16:
          lVar8 = 1;
          uVar7 = 0;
          goto LAB_001da746;
        case 0x1e:
        case 0x26:
        case 0x2e:
        case 0x36:
        case 0x3e:
        case 0x70:
        case 0x71:
        case 0x72:
        case 0x73:
        case 0x74:
        case 0x75:
        case 0x76:
        case 0x77:
        case 0x78:
        case 0x79:
        case 0x7a:
        case 0x7b:
        case 0x7c:
        case 0x7d:
        case 0x7e:
        case 0x7f:
        case 0xd0:
        case 0xd1:
        case 0xd2:
        case 0xd3:
        case 0xd4:
        case 0xd5:
        case 0xd6:
        case 0xd7:
        case 0xd8:
        case 0xd9:
        case 0xda:
        case 0xdb:
        case 0xdc:
        case 0xdd:
        case 0xde:
        case 0xdf:
          goto switchD_001da613_caseD_1e;
        case 0x46:
        case 0x4e:
        case 0x56:
        case 0x5e:
        case 0x66:
        case 0x6e:
        case 0x86:
        case 0x8e:
        case 0x96:
        case 0x9e:
        case 0xc6:
        case 0xce:
          uVar7 = (uint)(bVar2 >> 6);
          if (uVar5 <= uVar7) goto switchD_001da613_caseD_1e;
          uVar4 = (uint)(byte)((bVar2 >> 3 & 7) + 3);
          lVar8 = 1;
          break;
        case 0xa0:
        case 0xa1:
        case 0xa2:
        case 0xa3:
        case 0xa4:
        case 0xa5:
        case 0xa6:
        case 0xa7:
        case 0xa8:
        case 0xa9:
        case 0xaa:
        case 0xab:
        case 0xac:
        case 0xad:
        case 0xae:
        case 0xaf:
        case 0xb0:
        case 0xb1:
        case 0xb2:
        case 0xb3:
        case 0xb4:
        case 0xb5:
        case 0xb6:
        case 0xb7:
        case 0xb8:
        case 0xb9:
        case 0xba:
        case 0xbb:
        case 0xbc:
        case 0xbd:
        case 0xbe:
        case 0xbf:
          uVar7 = bVar2 >> 3 & 3;
          if (uVar5 < uVar7 + 3) goto switchD_001da613_caseD_1e;
          uVar4 = (*(ushort *)(pbVar9 + 1) & 3) + (uVar3 & 7) * 4 + 3;
          local_34 = (uint)(*(ushort *)(pbVar9 + 1) >> 2);
          lVar8 = 3;
          break;
        case 0xe0:
          if ((uVar5 == 1) || (uVar5 < pbVar9[1] + 0x12)) goto switchD_001da613_caseD_1e;
          uVar7 = pbVar9[1] + 0x10;
          lVar8 = 2;
LAB_001da746:
          uVar4 = 0;
          break;
        case 0xe1:
        case 0xe2:
        case 0xe3:
        case 0xe4:
        case 0xe5:
        case 0xe6:
        case 0xe7:
        case 0xe8:
        case 0xe9:
        case 0xea:
        case 0xeb:
        case 0xec:
        case 0xed:
        case 0xee:
        case 0xef:
          uVar7 = uVar3 & 0xf;
          if (uVar5 <= uVar7) goto switchD_001da613_caseD_1e;
          lVar8 = 1;
          uVar4 = 0;
          break;
        case 0xf0:
          if (uVar5 == 1) goto switchD_001da613_caseD_1e;
          uVar4 = pbVar9[1] + 0x10;
          lVar8 = 2;
          uVar7 = 0;
          break;
        case 0xf1:
        case 0xf2:
        case 0xf3:
        case 0xf4:
        case 0xf5:
        case 0xf6:
        case 0xf7:
        case 0xf8:
        case 0xf9:
        case 0xfa:
        case 0xfb:
        case 0xfc:
        case 0xfd:
        case 0xfe:
        case 0xff:
          uVar4 = uVar3 & 0xf;
          lVar8 = 1;
          uVar7 = 0;
        }
        _LZFSEIBootBufferPushN(param_1 + 3,uVar7,pbVar9 + lVar8);
        _LZFSEIBootBufferCopy(param_1 + 3,uVar4,local_34);
        uVar7 = (int)lVar8 + uVar7;
        pbVar9 = pbVar9 + uVar7;
        uVar6 = (ulong)(uVar5 - uVar7);
      }
    }
switchD_001da613_caseD_1e:
  }
  return 0xffffffff;
}

