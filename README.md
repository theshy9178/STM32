# STM32

STM32F103 标准外设库（SPL）学习工程集，Keil MDK（uVision5）工程。

## 工程目录

| 目录 | 内容 |
| --- | --- |
| `1-example` | 基础工程模板 / 例程骨架 |
| `2-GPIO` | GPIO 输出与输入 |
| `3-EXIT` | 外部中断 EXTI（查询方式对照） |
| `3.5-EXIT` | 外部中断 EXTI |
| `4-1TIM inter` | 定时器中断 |
| `4-2TIM extern` | 定时器外部时钟计数 |

## 使用方式

1. 用 Keil uVision5 打开对应目录下的 `*.uvprojx`（如 `2-GPIO/project.uvprojx`）。
2. 编译（F7）后烧写到 STM32F103C8T6（或对应型号）开发板。

## 说明

- 仓库只保留源码与工程文件；`Objects/`、`Listings/`、`DebugConfig/`、`*.hex` 等编译产物已通过 `.gitignore` 排除，克隆后重新编译即可生成。
- `Library/` 为 ST 标准外设库（STM32F10x Standard Peripheral Library）。
