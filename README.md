> 仓库地址：https://github.com/zsyd1314/c-language

# c语言

这是我在学习 C 语言过程中写的 Visual Studio 项目集合。

## 项目列表

- `Project1` ~ `Project17`：平时练习的 Visual Studio 项目
- `Project6/数组`：数组练习
- `动态内存`：动态内存相关练习
- `素数判断`：素数判断练习
- `闰年`：闰年判断练习

## 如何打开

进入对应的项目文件夹，双击其中的 `.vcxproj` 文件，用 Visual Studio 打开即可。

例如：

```text
Project9\Project9\Project9.vcxproj
```

## 说明

- 仓库只保存源代码和项目配置。
- `.vs`、`x64`、`Debug`、`Release`、`bin`、`obj` 等编译生成内容不会提交。
- 源码统一按 UTF-8 with BOM 保存；在中文 Windows 下编译时，字符串按 GBK/936 输出，避免控制台中文乱码。

## 更新仓库

以后请在 `E:\C语言代码仓库` 里打开和修改项目，然后执行：

```powershell
git add .
git commit -m "更新说明"
git push
```

