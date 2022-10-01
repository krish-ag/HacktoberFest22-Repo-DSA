from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_MainWindow(object):

  
    def addToList(self):
        item = self.lineEdit.text()
        if not item:
            return
        self.toDoList.addItem(item)
        self.lineEdit.setText("")

    def deleteItem(self):
        idx = self.toDoList.currentRow()
        self.toDoList.takeItem(idx)


    def resetList(self):
        self.toDoList.clear()

    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(325, 342)
        MainWindow.setFixedSize(325, 342)
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.lineEdit = QtWidgets.QLineEdit(self.centralwidget)
        self.lineEdit.setGeometry(QtCore.QRect(10, 8, 310, 21))
        self.lineEdit.setReadOnly(False)
        self.lineEdit.setObjectName("lineEdit")
        self.toDoList = QtWidgets.QListWidget(self.centralwidget)
        self.toDoList.setGeometry(QtCore.QRect(7, 70, 312, 240))
        self.toDoList.setObjectName("toDoList")
        self.add = QtWidgets.QPushButton(self.centralwidget, clicked=self.addToList)
        self.add.setGeometry(QtCore.QRect(10, 40, 101, 23))
        self.add.setObjectName("add")
        self.deleteItem = QtWidgets.QPushButton(self.centralwidget, clicked=self.deleteItem)
        self.deleteItem.setGeometry(QtCore.QRect(119, 40, 100, 23))
        self.deleteItem.setObjectName("deleteItem")
        self.reset = QtWidgets.QPushButton(self.centralwidget, clicked=self.resetList)
        self.reset.setGeometry(QtCore.QRect(229, 40, 91, 23))
        self.reset.setObjectName("reset")
        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QtWidgets.QMenuBar(MainWindow)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 325, 21))
        self.menubar.setObjectName("menubar")
        MainWindow.setMenuBar(self.menubar)
        self.statusbar = QtWidgets.QStatusBar(MainWindow)
        self.statusbar.setObjectName("statusbar")
        MainWindow.setStatusBar(self.statusbar)

        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)


    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "ToDo List"))
        self.lineEdit.setPlaceholderText(_translate("MainWindow", "My ToDos"))
        self.add.setText(_translate("MainWindow", "Add To List"))
        self.deleteItem.setText(_translate("MainWindow", "Delete Item"))
        self.reset.setText(_translate("MainWindow", "Clear List"))


if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    MainWindow = QtWidgets.QMainWindow()
    ui = Ui_MainWindow()
    ui.setupUi(MainWindow)
    MainWindow.show()
    sys.exit(app.exec_())
